#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> v{"Kant", "Plato", "Aristotle", "Kierkegard",
                             "Hume"};
  for (auto e : v) {
    std::cout << e << std::endl;
  }
  std::sort(v.begin(), v.end());
  for (auto e : v) {
    std::cout << e << std::endl;
  }
  return 0;
}
