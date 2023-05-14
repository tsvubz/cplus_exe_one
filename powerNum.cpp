#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int base, exp;

  cout << "Enter a base: " << endl;

  cin >> base;

  cout << "Enter an exponent" << endl;

  cin >> exp;

  int result = pow(base, exp);

  cout << "Result: " << result << endl;

  return 0;
}