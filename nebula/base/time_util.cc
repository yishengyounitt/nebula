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

#include "nebula/base/time_util.h"

#include <sys/time.h>

int64_t NowInMsecTime() {
    timeval tv;
    gettimeofday(&tv, 0);
    return int64_t(tv.tv_sec) * 1000 + tv.tv_usec/1000;
}

int64_t NowInUsecTime() {
    timeval tv;
    gettimeofday(&tv, 0);
    return int64_t(tv.tv_sec) * 1000000 + tv.tv_usec;
}

uint32_t Now() {
  return time(NULL);
}
