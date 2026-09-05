#include <functional>

void do_sth(const std::function<void(int, int)> &add) { add(1, 2); }

template <typename TungTungTungSahur>
void do_sth_template(const TungTungTungSahur &add) {
  add(1, 2);
}

// auto octavius
void do_sth_auto(const auto &add) { add(1, 2); }

void do_sth_ptr(void (*add)(int, int)) { add(1, 2); }

int main() {}
