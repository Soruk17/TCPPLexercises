#include <iostream>
#include <string>

int main (int argc, char *argv[]) {
  auto b {true};
  auto c {'A'};
  auto i {3};
  auto d {3.1415};
  std::string s {"Dio Porco"};  
  std::cout << b << c << i << d << s << std::endl;
  return 0;
}
