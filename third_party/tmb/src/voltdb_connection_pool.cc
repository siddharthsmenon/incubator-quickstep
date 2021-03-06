//   Copyright 2014-2015 Quickstep Technologies LLC.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.

#include "tmb/internal/voltdb_connection_pool.h"

#include <cstdint>
#include <string>
#include <utility>
#include <vector>

#include "Client.h"        // NOLINT(build/include)

#include "tmb/internal/lock_free_stack.h"

namespace tmb {
namespace internal {

bool VoltDBConnectionPool::Initialize() {
  if (!initialized_) {
    if (servers_.empty()) {
      return false;
    }
    try {
      voltdb::Client client(CreateClient());
      clients_.Emplace(new voltdb::Client(client));
    } catch (...) {
      return false;
    }
    initialized_ = true;
  }
  return true;
}

voltdb::Client VoltDBConnectionPool::CreateClient() const {
  voltdb::Client client(voltdb::Client::create(config_));
  for (const ServerDescription &desc : servers_) {
    client.createConnection(desc.hostname, desc.port);
  }
  return std::move(client);
}

}  // namespace internal
}  // namespace tmb
