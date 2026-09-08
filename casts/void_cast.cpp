#include <iostream>

class X {
public:
  operator void() { std::cout << "A" << std::endl; }
};

int main() {
  X x;

  // C-style cast
  // does not call operator void
  (void)x;

  // using static_cast
  // does not call operator void
  static_cast<void>(x);

  // calls operator directly
  x.operator void();

  /*
   the C++ standard does not allow for any object to be
   cast as void, the only way is to call the operator
   directly
    */
}
