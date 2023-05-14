#include <iostream>

using namespace std;

int main() {
  int salary1, salary2;

  cout << "Enter salary1 for person1: " << endl;
  cin >> salary1;

  cout << "Enter salary2 for person2: " << endl;
  cin >> salary2;

  if (salary1 > salary2) {
    cout << "Person1 has the highest salary" << endl;
  }else {
    cout << "Person2 has the highest salary" << endl;
  }

  return 0;
}