/*
 * Copyright 2023 Chinmay Garde
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <optional>
#include <string>

namespace impeller {

class Argument {
 public:
  Argument(std::string name) : name_(std::move(name)) {}

  ~Argument();

 private:
  std::string name_;

  Argument(const Argument&) = delete;

  Argument& operator=(const Argument&) = delete;
};

}  // namespace impeller
