/*
 *  Copyright (c) 2016, https://github.com/nebula-im/nebula
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

#include "nebula/net/handler/mtproto/mtproto_pipeline_factory.h"

#include <wangle/channel/EventBaseHandler.h>
#include <wangle/channel/AsyncSocketHandler.h>

#include "nebula/net/thread_local_conn_manager.h"
#include "nebula/net/handler/mtproto/mtproto_transport_handler.h"

namespace {

// 设置readBufferSettings_
const uint64_t kDefaultMinAvailable = 8096;
const uint64_t kDefaultAllocationSize = 16192;

}

///////////////////////////////////////////////////////////////////////////////////////////
nebula::MTProtoPipeline::Ptr MTProtoServerPipelineFactory::newPipeline(std::shared_ptr<folly::AsyncTransportWrapper> sock) {
  auto pipeline = nebula::MTProtoPipeline::create();
  pipeline->setReadBufferSettings(kDefaultMinAvailable, kDefaultAllocationSize);
  pipeline->addBack(wangle::AsyncSocketHandler(sock));
  pipeline->addBack(MTProtoTransportHandler());
  // pipeline->addBack(MTProtoMessageHandler());
  pipeline->addBack(MTProtoHandler(service_));
  pipeline->finalize();
  
  return pipeline;
}

