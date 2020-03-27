/*
 * Copyright (c) 2017 Sprint
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HSSGTW_INCLUDE_PROVISIONHANDLER_H_
#define HSSGTW_INCLUDE_PROVISIONHANDLER_H_

#include <iostream>
#include <pistache/endpoint.h>
#include <pistache/router.h>

#include <memory>

#define RAPIDJSON_NAMESPACE fdrapidjson
#include "rapidjson/filereadstream.h"
#include "rapidjson/document.h"

extern RAPIDJSON_NAMESPACE::Document docSchema;

class SStats;

class RestHandler : public Pistache::Http::Handler {
 public:
  HTTP_PROTOTYPE(RestHandler)
  void onRequest(
      const Pistache::Http::Request& request,
      Pistache::Http::ResponseWriter response);
};

#endif /* HSSGTW_INCLUDE_PROVISIONHANDLER_H_ */
