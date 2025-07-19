#include <fstream>
int main (int argc, char *argv[]) {
  std::ofstream out;
  out.open("test.txt");
  for (auto i = 0; i != 100; ++i) {
    out << i << std::endl;
  }
  return 0;
}
