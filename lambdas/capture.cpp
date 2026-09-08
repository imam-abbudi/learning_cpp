#include <iostream>

void lets_see(const auto &fn) {
  int a = 5;

  std::cout << fn(a) << '\n';
}

int main() {
  {
    int user_defined = 10;

    // stores a copy of user_defined
    auto lmd = [user_defined](int a) { return user_defined + a; };

    std::cout << lmd(5) << '\n';

    // 'lmd' object is still alive at this point
    // no undefined behavior
    lets_see(lmd);
  }

  {
    int a = 10, b = 20;

    // = captures by copy
    // & captures by reference
    auto lmd = [=]() { return a + b; };

    std::cout << lmd() << '\n';
  }

  auto foo = [] -> int {};
}
