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

int *get_array_from_num(int i) {
  int len_num{get_num_len(i)};
  int *p = new int[len_num];
  std::cout << "\n";
  len_num -= 1;
  while (i != 0) {
    std::cout << i % 10 << std::endl;
    p[len_num--] = i % 10;
    i /= 10;
  }
  return p;
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
  int *n = get_array_from_num(i);
  for (int i = 0; i != length; ++i) {
    b[i] = n[i] + 48;
  }
  delete n;
  return b;
}

int main(int argc, char *argv[]) {
  char b[7];
  char *p = b;
  p = itoa_mod(254372, b, 7);
  for (int i{0}; i != 7; ++i) {
    //std::cout << p[i] << std::endl;
  }
  return 0;
}
