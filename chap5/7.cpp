#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
int main (int argc, char *argv[]) {
  std::vector<int> v {5, 9, -1, 200, 0};
  for (auto elem : v) {
    std::cout << elem << std::endl;
  }
  std::sort(v.begin(), v.end());
  for (auto elem : v) {
    std::cout << elem << std::endl;
  }
  return 0;
}
