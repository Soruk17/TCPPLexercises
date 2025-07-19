#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
int main(int argc, char *argv[]) {
  std::ifstream in;
  std::string out;
  in.open("test.txt");
  while (std::getline(in, out)) {
    std::cout << out << std::endl;
  }
  return 0;
}
