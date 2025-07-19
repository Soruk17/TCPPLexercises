#include <iostream>
#include <istream>
#include <ostream>
#include <string>
enum class Season {
  spring,
  summer,
  autumn,
  winter,
};

Season operator++(Season &s) {
  int season = static_cast<int>(s);
  ++season;
  if (season > 3)
    season = 0;
  return static_cast<Season>(season);
}

Season operator--(Season &s) {
  int season = static_cast<int>(s);
  --season;
  if (season < 0)
    season = 3;
  return static_cast<Season>(season);
}

void operator<<(Season &s, std::ostream os) {
  std::string str;
  switch (s) {
    case Season::spring:
      str = "Spring";
    case Season::summer:
      str = "Summer";
    case Season::autumn:
      str = "Autumn";
    case Season::winter:
      str = "Winter";
  }
  os << str;
}

void operator>>(Season &s, std::istream is) {
  std::string str;
  is >> str;
  if (str == "Spring")
    s = Season::spring;
  else if (str == "Summer")
    s = Season::summer;
  else if (str == "Autumn")
    s = Season::autumn;
  else if (str == "Winter")
    s = Season::winter;
}
