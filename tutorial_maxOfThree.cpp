#include <iostream>
using namespace std;

int get_max(int num1, int num2, int num3) {
  int result;

  if (num1 > num2 && num1 > num3) {
    result = num1;
  }else if(num2 > num1 && num2 > num3) {
    result = num2;
  } else {
    result = num3;
  }

  return result;
}

int main() {

  cout << get_max(65, 38, 12);

  return 0;

}
