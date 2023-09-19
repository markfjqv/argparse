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
