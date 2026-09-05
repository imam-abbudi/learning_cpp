#include <functional>
#include <iostream>

int main() {

  // trying this off memory
  // using std::function
  std::function add{[](int a, int b) { return a + b; }};

  std::cout << add(1, 2) << '\n';

  // using normal lambda type via auto
  auto add_lmd{[](int a, int b) { return a + b; }};
  std::cout << add_lmd(2, 3) << '\n';

  // using a function pointer
  int (*add_ptr)(int, int){[](int a, int b) { return a + b; }};
  std::cout << add_ptr(5, 5) << '\n';
}
