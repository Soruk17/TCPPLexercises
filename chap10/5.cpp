#include <iostream>
#include <ostream>
int get_num_len(int i) {
  int count{0};
  while (i != 0) {
    i /= 10;
    ++count;
  }
  return count;
}
char *itoa(int i, char b[]) {
  int len_num{get_num_len(i)};
  b[len_num--] = '\0';
  while (i != 0) {
    b[len_num--] = (i % 10) + 48;
    i /= 10;
  }
  return b;
}

char *itoa_mod(int i, char b[], int length) {
  return nullptr;
}

int main(int argc, char *argv[]) {
  char b[7];
  char *p = b;
  p = itoa(254372, b);
  for (int i{0}; i != 4; ++i) {
    std::cout << p[i] << std::endl;
  }
  return 0;
}
