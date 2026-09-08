int main() {
  long long num = 0;

  char *one_byte = reinterpret_cast<char *>(&num);

  int *ptr = reinterpret_cast<int *>(one_byte + 1);

  return *ptr;
}
