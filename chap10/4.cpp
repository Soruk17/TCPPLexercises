#include <cctype>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <ostream>
#include <vector>
int my_pow(int a, int b) {
  int ret{1};
  for (int i = 0; i != b; ++i) {
    ret *= a;
  }
  return ret;
}
bool first_char_zero(const char *s) { return s[0] == '0'; }

template <typename T> bool is_in(T elem, std::vector<T> v) {
  for (T i : v) {
    if (i == elem) {
      return true;
    }
  }
  return false;
}

bool all_chars_octal(const char *s) {
  std::vector<int> v{'0', '1', '2', '3', '4', '5', '6', '7'};
  for (const char *p{s}; *p != '\0'; ++p) {
    if (!is_in(std::tolower(*p), v)) {
      return false;
    }
  }
  return true;
}

bool is_octal(const char *s) {
  return first_char_zero(s) && !(std::tolower(s[1]) == 'x') &&
         all_chars_octal(s);
}

bool all_chars_hex(const char *s) {
  std::vector<int> v{'0', '1', '2', '3', '4', '5', '6', '7',
                     '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  for (const char *p{&s[2]}; *p != '\0'; ++p) {
    if (!is_in(toupper(*p), v)) {
      return false;
    }
  }
  return true;
}

bool is_hex(const char *s) {
  return first_char_zero(s) && (std::tolower(s[1]) == 'x') && all_chars_hex(s);
}

bool is_decimal(const char *s) { return !is_hex(s) && !is_octal(s); }
bool is_decimal(const char *s, bool hex, bool oct) { return !hex && !oct; }
int atoi(const char *s) {
  int ret{0};
  if (bool x = is_hex(s)) {
    std::size_t max_exp{strlen(&s[2]) - 1};
    for (const char *p{&s[2]}; *p != '\0'; ++p) {
      if (std::isalpha(*p)) {
        ret += (std::toupper(*p) - 55) * std::pow(16, max_exp--);
      } else {
        ret += (*p - 48) * std::pow(16, max_exp--);
      }
    }
  } else if (bool o = is_octal(s)) {
    int max_exp = strlen(s) - 1;
    for (const char *p{s}; *p != '\0'; ++p) {
      ret += (*p - 48) * my_pow(8, max_exp--);
    }
  } else if (is_decimal(s, x, o)) {
    std::size_t max_exp{strlen(s) - 1};
    for (const char *p{s}; *p != '\0'; ++p) {
      ret += (*p - 48) * std::pow(10, max_exp--);
    }
  }
  return ret;
}

int main(int argc, char *argv[]) {
  char input[10];
  scanf("%s", input);
  std::cout << atoi(input) << std::endl;
  return 0;
}
