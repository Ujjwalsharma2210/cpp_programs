#include <iostream>

using namespace std;

int main() {

  float num1, num2, res;
  char op;

  cout << "Enter first number : ";
  cin >> num1;
  cout << "Enter operator : ";
  cin >> op;
  cout << "Enter second number : ";
  cin >> num2;

  if (op == '+') {
    res = num1 + num2;
  } else if (op == '-') {
    res = num1 - num2;
  } else if (op == '*') {
    res = num1 * num2;
  } else if (op == '/') {
    res = num1 / num2;
  } else {
    cout << "Invalid input";
  }

  cout << res;
  return 0;
}
