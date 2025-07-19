#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  char a[] = {'a', 'b', 'c', 'd'};
  char *s = a;
  char *s1 = &a[3];
  std::cout << s1 - s << std::endl;
  return 0;
}
