#include <iostream>
#include <vector>
// #include <cmath>

using namespace std;

vector<int> decimalToBinary(int decimal)
{
  vector<int> binary;

  while (decimal > 0)
  {
    int remainder = decimal % 2;
    binary.push_back(remainder);
    decimal /= 2;
  }

  // reverse(binary.begin(), binary.end());

  return binary;
}

int main()
{
  int decimal;
  cout << "Enter a decimal number: " << endl;
  cin >> decimal;

  vector<int> binary = decimalToBinary(decimal);

  cout << "Binary represantation: ";
  for (int i = 0; i < binary.size(); ++i)
  {
    cout << binary[i];
  }

  cout << endl;

  return 0;
}