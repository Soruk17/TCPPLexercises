#include <istream>
#include <iterator>
#include <ostream>
struct Date {
  int day;
  int month;
  int year;
};

void init_date(int day, int month, int year, Date &d) {
  d.month = month;
  d.year = year;
  d.day = day;
}

Date get_date(std::istream is) {
  int day;
  int month;
  int year;
  is >> day;
  is >> month;
  is >> year;
  Date d{day, month, year};
  return d;
}

void out_date(std::ostream os, Date d) {
  os << d.day << ", " << d.month << ", " << d.year << std::endl;
}
