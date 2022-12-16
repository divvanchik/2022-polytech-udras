#include "String.h"
#include <cstring>
#include <iostream>

String::String(const char *s) {
  length = std::strlen(s);
  data = (char *)std::malloc(length);
  std::strcpy(data, s);
}

std::size_t String::get_length() { return length; }

const char *String::c_str() { return data; }

String String::operator+(String rv) {
  auto dest = (char *)malloc(length + rv.get_length());
  strcpy(dest, data);
  strcpy(dest + length, rv.c_str());
  return String(dest);
}

std::ostream &operator<<(std::ostream &out, String &S) {
  out << S.c_str();
  return out;
}
