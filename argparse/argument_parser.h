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

#include <string>

namespace argparse {

class ArgumentParser {
 public:
  ArgumentParser();

  ~ArgumentParser();

  ArgumentParser& SetProgramName(std::string name) {
    program_name_ = std::move(name);
    return *this;
  }

  ArgumentParser& SetProgramDescription(std::string desc) {
    program_description_ = std::move(desc);
    return *this;
  }

  ArgumentParser& SetEpilog(std::string epilog) {
    program_epilog_ = std::move(epilog);
    return *this;
  }

  ArgumentParser& SetProgramVersion(std::string version) {
    program_version_ = std::move(version);
    return *this;
  }

 private:
  std::string program_name_;
  std::string program_description_;
  std::string program_epilog_;
  std::string program_version_;

  ArgumentParser(const ArgumentParser&) = delete;

  ArgumentParser& operator=(const ArgumentParser&) = delete;
};

}  // namespace argparse
