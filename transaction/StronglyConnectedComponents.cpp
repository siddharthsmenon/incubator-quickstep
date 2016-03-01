#include "transaction/StronglyConnectedComponents.hpp"

namespace quickstep {

StronglyConnectedComponents::StronglyConnectedComponents(DirectedGraph *directed_graph)
  : directed_graph_(directed_graph)
  , is_marked_(directed_graph_->count())
  , component_ids_(directed_graph_->count())
  , low_ids_(directed_graph_->count())
  , preorder_counter_(0)
  , no_of_components_(0) {
}
  
void StronglyConnectedComponents::findStronglyConnectedComponents() {
  for (DirectedGraph::NodeId v = 0; v < directed_graph_->count(); ++v) {
    if (!is_marked_[v]) {
      depthFirstSearch(v);
    }
  }
}


void StronglyConnectedComponents::depthFirstSearch(DirectedGraph::NodeId v) {
  // Mark this node.
  is_marked_[v] = true;

  // Set the low_id = preorder_counter and increment counter.
  // Right now low_id eqaual to the counter because the node
  // have not seen any other node.
  low_ids_[v] = preorder_counter_++;

  // Set min = counter = low_id.
  // It keeps track of the minimum traversal order the node has
  // seen.
  std::uint64_t min = low_ids_[v];

  // Push the node to the stack.
  stack_.push(v);

  // For every adjacent node w:
  // 1-) Apply DFS if w is not marked (recursively).
  // 2-) If low id of w is smaller than minimum number
  //     we have seen so far, update our minimum.
  for (DirectedGraph::NodeId w : directed_graph_->getAdjacentNodes(v)) {
    if (!is_marked_[w]) {
      depthFirstSearch(w);
    }
    if (low_ids_[w] < min) {
      min = low_ids_[w];
    }
  }

  // If this node's low id is bigger than the minimum
  // traversal order we have seen so far, update the
  // minimum to reflect changes. That means also we captured
  // a cycle here. To keep invariant we have to keep node in
  // stack, therefore it returns.
  if (min < low_ids_[v]) {
    low_ids_[v] = min;
    return;
  }

  // Reaching here means:
  // - v.min >= v.low_id
  // v is the root of strongly connected component.
  DirectedGraph::NodeId w;
  do {
    // Until we get our node, pop from stack.
    w = stack_.top();

    // Make component id of the node on the top
    // equals to current number of component counter.
    component_ids_[w] = no_of_components_;

    // Set the low id to the more than max number posssible
    // which is the (no_nodes + 1).
    low_ids_[w] = directed_graph_->count();
    stack_.pop();
  } while (w != v);

  // Increment current no of component counter.
  no_of_components_++;
}

std::uint64_t StronglyConnectedComponents::getComponentId(DirectedGraph::NodeId node_id) const {
  return component_ids_[node_id];
}

std::uint64_t StronglyConnectedComponents::getTotalComponents() const {
  return no_of_components_;
}

std::unordered_map<std::uint64_t, std::vector<DirectedGraph::NodeId>> StronglyConnectedComponents::getComponentMapping() const {
  std::unordered_map<std::uint64_t, std::vector<DirectedGraph::NodeId>> component_mapping;
  for (std::uint64_t i = 0; i < component_ids_.size(); ++i) {
    component_mapping[component_ids_[i]].push_back(i);
  }
  return component_mapping;
}

}
