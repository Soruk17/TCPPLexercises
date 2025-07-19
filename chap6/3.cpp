#include <chrono>
#include <iostream>
#include <ostream>
int main (int argc, char *argv[]) {
  auto t0 = std::chrono::high_resolution_clock::now();
  int sum = 0;
  for (auto i = 0; i != 1000000000; ++i) {
    sum += i;
  }
  std::cout << sum << std::endl;
  auto t1 = std::chrono::high_resolution_clock::now();
  std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count() << "milliseconds" << std::endl;
  return 0;
}
