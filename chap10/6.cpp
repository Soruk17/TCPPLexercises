#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[]) {
  std::string file_name;
  std::cin >> file_name;

  std::ifstream in_file{file_name};
  std::ofstream out_file{file_name + ".strp"};

  std::stringstream strStream;
  strStream << in_file.rdbuf();
  std::string str{strStream.str()};
  
  std::string ret_string{};
  for (int i{0}; i != str.size(); ++i) {
    if (str[i] == '/' && str[i + 1] == '/') {
      while (str[++i] != '\n') {
        ++i;
      }
      --i;
    } else if (str[i] == '/' && str[i + 1] == '*') {
      while (!(str[i] == '*' && str[i + 1] == '/')) {
        ++i;
      }
      ++i;
    } else {
      ret_string += str[i];
    }
  }

  out_file << ret_string;

  return 0;
}
