#include <iostream>
#include <ostream>
void print(int &num) { std::cout << num << std::endl; }
int main(int argc, char *argv[]) {
  for (auto i = 4; i != 0;) {
    if (i == 4) {
      print(i);
      ++i;
    } else if (i == 5) {
      print(i);
      i += 4;
    } else if (i == 9) {
      print(i);
      i += 8;
    } else if (i == 17) {
      print(i);
      i -= 5;
    } else if (i == 12) {
      print(i);
      i = 0;
    }
  }
  return 0;
}
