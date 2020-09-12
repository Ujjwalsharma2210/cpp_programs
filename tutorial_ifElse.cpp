#include <iostream>
using namespace std;

int main() {

  char gender;
  float height;

  bool isMale;
  bool isTall;

  cout << "If you are a male enter y else enter n." << endl;
  cin >> gender;

  cout << "Your choice was : " << gender << endl;

  cout << "Enter your height in feet as a decimal : " << endl;
  cin >> height;

  cout << "Your choice was : " << height << endl;

  if (gender == 'y') {
    isMale = true;
  }else {
    isMale = false;
  }

  if (height > 5.00) {
    isTall = true;
  }else {
    isTall = false;
  }

  if (isMale && isTall) {
    cout << "You are a Tall man.\n";
  }
  else if (isMale && !isTall) {
    cout << "You are a short male.\n";
  }
  else if (isTall && !isMale) {
    cout << "You are a tall girl\n";
  }
  else {
    cout << "You are a short girl.\n";
  }

  return 0;
}
