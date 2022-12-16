#include <cmath>
#include <iostream>

int main() {
  while (true) {
    char op;
    int num1, num2, result = 0;

    std::cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    case '^':
      result = std::pow(num1, num2);
      break;
    default:
      std::cout << "error";
      break;
    }
    std::cout << result << std::endl;
  }
  return 0;
}
