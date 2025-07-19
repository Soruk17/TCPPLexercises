
// ^\d+(\.\d+)?$

#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <regex>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
  std::ifstream in{"example.txt"};
  std::vector<std::string> v;
  std::regex rx{"^\d+(\.\d+)?$"};
  std::smatch m;

  for (std::string line; std::getline(in, line);) {
    std::regex_search(line, m, rx);
  }

  for (auto x : m) {
    std::cout << x << std::endl;
  }
  return 0;
}
