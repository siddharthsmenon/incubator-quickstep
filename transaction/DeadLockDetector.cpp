#include "transaction/DeadLockDetector.hpp"

#include "transaction/CycleDetector.hpp"

namespace quickstep {

DeadLockDetector::DeadLockDetector(LockTable *lock_table)
  : wait_for_graph_(nullptr)
  , tid_node_mapping_(std::make_unique<TransactionIdNodeMap>())
  , lock_table_(lock_table) { 
}

void DeadLockDetector::addPendingInfo(TransactionId pending,
				      TransactionId owner) {
  DepGraph::NodeId pending_node_id = getNodeId(pending);
  DepGraph::NodeId owner_node_id = getNodeId(owner);

  // TODO(Hakan): Check first whether link is already created
  wait_for_graph_->addEdge(pending_node_id, owner_node_id);
}

bool DeadLockDetector::isDependent(TransactionId pending, TransactionId owner) {
  FATAL_ERROR("Not implemented");
}

std::vector<TransactionId> DeadLockDetector::getAllDependents(TransactionId owner) {
  FATAL_ERROR("Not implemented");
}

std::vector<TransactionId> DeadLockDetector::getAllDependees(TransactionId pending) {
  DepGraph::NodeId pending_node_id = getNodeId(pending);
  std::vector<DepGraph::NodeId> nodes = wait_for_graph_->getAdjacentNodes(pending_node_id);
  std::vector<TransactionId> transactions;
  transactions.reserve(nodes.size());
  for (DepGraph::NodeId node_id : nodes) {
    TransactionId tid = wait_for_graph_->getDataFromNode(node_id);
    transactions.push_back(tid);
  }
  return transactions;
  
}

DeadLockDetector::DepGraph::NodeId DeadLockDetector::getNodeId(TransactionId tid) {
  DepGraph::NodeId node_id;
  if (tid_node_mapping_->count(tid) == 0) {
    node_id = addNode(tid);
  }
  else {
    node_id = (*tid_node_mapping_)[tid];
  }
  return node_id;
}


DeadLockDetector::DepGraph::NodeId DeadLockDetector::addNode(TransactionId tid) {
  TransactionId *tid_ptr = new TransactionId(tid);
  DepGraph::NodeId node_id = wait_for_graph_->addNode(tid_ptr);
  return node_id;
}

std::vector<TransactionId> DeadLockDetector::getAllVictims() {
  std::vector<TransactionId> result_victims;

  wait_for_graph_ = std::make_unique<DepGraph>();
  
  lock_table_->latchShared();
  

  for (LockTable::ConstIterator it = lock_table_->begin(); it != lock_table_->end(); ++it) {

    const LockTable::LockOwnList &own_list = it->second.first;
    const LockTable::LockPendingList &pending_list = it->second.second;
    
    for (LockTable::LockOwnList::const_iterator it_own_list = own_list.begin();
	 it_own_list != own_list.end(); ++it_own_list) {
      
      TransactionId owned_transaction = it_own_list->first;
      
      DepGraph::NodeId owned_node = getNodeId(owned_transaction);
      
      for (LockTable::LockPendingList::const_iterator it_pending_list = pending_list.begin();
	   it_pending_list != pending_list.end(); ++it_pending_list) {
	
	TransactionId pending_transaction = it_pending_list->first;
	
	DepGraph::NodeId pending_node = getNodeId(pending_transaction);
	wait_for_graph_->addEdge(pending_node, owned_node);
      }
    }
  }

  lock_table_->unlatchShared();

  CycleDetector<TransactionId> cycle_detector(wait_for_graph_.get());
  std::vector<DepGraph::NodeId> victim_nodes = cycle_detector.breakCycle();
  for (DepGraph::NodeId node_id : victim_nodes) {
    TransactionId victim_tid = wait_for_graph_->getDataFromNode(node_id);
    result_victims.push_back(victim_tid);
  }

  wait_for_graph_.release();

  return result_victims;
}


}
