#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int primeNum;

  cout << "Enter a number and I will tell if its prime number or not" << endl;

  cin >> primeNum;

  if(primeNum %= 1){
    cout << "You entered a prime number" << endl;
  }else if (primeNum %= 0)
  {
    cout << "You entered an even number" << endl;
  }else{
    cout << "You did not enter a number" << endl;
  }
  

  return 0;
}