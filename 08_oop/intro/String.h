#include <iostream>

class String {
private:
  std::size_t length;
  char *data;

public:
  String(const char *s);
  std::size_t get_length();
  const char *c_str();
  String operator+(String rv);
  friend std::ostream &operator<<(std::ostream &out, String &S);
};
