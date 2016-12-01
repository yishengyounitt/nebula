/*
 *  Copyright (c) 2016, https://github.com/zhatalk
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NEBULA_NET_BASE_SERVICE_PLUGIN_H_
#define NEBULA_NET_BASE_SERVICE_PLUGIN_H_

#include "nebula/base/plugin.h"
#include "nebula/net/base/config_info.h"

namespace nebula {

class ServicePlugin : public Plugin {
public:
  // explicit ServicePlugin(std::shared_ptr<IOThreadPoolConnManager> conns)
  //  : conns_(conns) {
  // }
  
  virtual ~ServicePlugin() = default;
  
  void Install(const Configuration& conf) override {
    service_info_.SetConf("", conf);
  }
  
protected:
  ServiceConfig service_info_;
  // std::shared_ptr<IOThreadPoolConnManager> conns_;
};

}

#endif
