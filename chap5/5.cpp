#include <iostream>
#include <ostream>
#include <string>
int main () {
  std::string name;
  int age;
  std::cout << "Insert Name" << std::endl;
  std::cin >> name;
  std::cout << "Insert Age" << std::endl;
  std::cin >> age;

  std::cout << name << age;
  return 0;
}
