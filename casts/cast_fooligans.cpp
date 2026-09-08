#include <cstdint>

int main() {
  int a = static_cast<unsigned int>(-500);
  int b{a};
  auto c = uint64_t{5};
  // unsigned int c = unsigned int{5}; // this line does not compile
  unsigned int d = int{-10};

  /*
   simple type specifiers are one word long, such as int, double, float...
   direct list initialization requires a simple type specifier. hence why
   auto c = [...] works while unsigned int c = [...] does not.
      */
}
