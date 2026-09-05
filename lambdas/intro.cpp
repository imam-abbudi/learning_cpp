#include <algorithm>
#include <ios>
#include <iostream>

// predicate! whatever that means
int p(std::string_view name) { return name.find("nut") != std::string::npos; }

int main() {
  // make an array of names
  std::array<std::string, 4> names{"alicing", "bobbing", "cheryling",
                                   "dereckinutg"};

  // iterate over via function
  auto found{std::find_if(names.begin(), names.end(), p)};

  // iterate over via lambda, so sophisticated
  auto found_lmd =
      std::find_if(names.begin(), names.end(), [](std::string name) {
        return name.find("nut") != std::string::npos;
      });
}
