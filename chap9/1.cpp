#include <iostream>
#include <ostream>
struct str {
  bool b;
  char c;
  int i;
  long l;
  double d;
  long double ld;
};

struct st {
  long double ld;
  double d;
  long l;
  int i;
  char c;
  bool b;
};

int main (int argc, char *argv[]) {
  std::cout << sizeof(str) << std::endl;
  std::cout << sizeof(st) << std::endl;
  return 0;
}
