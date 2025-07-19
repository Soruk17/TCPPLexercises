#include <chrono>
#include <iostream>
#include <ostream>
#include <thread>

void hello() {
  std::cout << "Hello";
  std::this_thread::sleep_for(std::chrono::seconds(1));
}
void world() {
  std::cout << "World!" << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main(int argc, char *argv[]) {
  std::thread t(hello);
  std::thread th(world);
  t.join();
  th.join();
  return 0;
}
