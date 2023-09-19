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
