#include <array>
#include <cstring>
#include <iostream>
#include <ostream>
struct month {
  char name[15];
  int days;
};

int main(int argc, char *argv[]) {
  std::array<char[15], 12> months{
      "January", "February", "March",     "April",   "May",      "June",
      "July",    "August",   "September", "October", "November", "Dicember"};
  std::array<int, 12> days{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for (int i = 0; i != 12; ++i) {
    std::cout << months[i] << " Has " << days[i] << " days" << std::endl;
  }
  std::array<month, 12> months2;
  for (int i = 0; i != 12; ++i) {
    strcpy(months2[i].name, months[i]);
    months2[i].days = days[i];   
  }
  for (int i = 0; i != 12; ++i) {
    std::cout << months2[i].name << " Has " << months2[i].days << " Days" << std::endl;
  }
  return 0;
}
