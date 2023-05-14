#include <iostream>

using namespace std;

int main() {

  char alpha;

  cout << "Enter a uppercase or lowercase letter" << endl;

  cin >> alpha;

  if(isupper(alpha)) {
    cout << "You entered an uppercase letter" << endl;
  } else if(islower(alpha)) {
    cout << "You entered a lower case letter" << endl;
  } else {
    cout << "You entered an invalid alpahbet" << endl;
  }

  return 0;
}