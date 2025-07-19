
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <random>
#include <vector>
class Rand_int {
public:
  Rand_int(double low, double high) : dist{low, high} {}
  int operator()() { return dist(re); }

private:
  std::default_random_engine re;
  std::normal_distribution<> dist;
};

void draw_line(char c, int n) {
  for (int i = 0; i != n; ++i) {
    std::cout << c;
  }
  std::cout << std::endl;
}

int main() {
  Rand_int rnd{0, 30};
  std::vector<int> histogram(30);

  for (auto i = 0; i != 200; ++i) {
    ++histogram[abs(rnd()) % 30];
  }

  for (auto i = 0; i != histogram.size() - 1; ++i) {
    draw_line('*', histogram[i]);
  }
  return 0;
}
