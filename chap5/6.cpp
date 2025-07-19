

#include <ios>
#include <iostream>
#include <istream>
#include <ostream>
#include <string>
class Pair {
public:
  std::string name;
  int age;
  Pair(std::string name, int age) : name{name}, age{age} {}

  friend std::ostream &operator<<(std::ostream &os, const Pair &p) {
    return os << "{" << p.name << ", " << p.age << "}" << std::endl;
  }

  friend std::istream &operator>>(std::istream &is, Pair &p) {
    std::string name;
    is >> name;
    int age;
    is >> age;
    p.name = name;
    p.age = age;

    return is;
  }
};

int main(int argc, char *argv[]) {
  Pair p{"Sebastian", 19};
  std::cin >> p;
  std::cout << p;
  return 0;
}
