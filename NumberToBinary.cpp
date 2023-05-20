#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> decimalToBinary(int decimal)
{
  vector<int> binary;

  while (decimal > 0)
  {
    binary.push_back(decimal % 2);
    decimal /= 2;
  }

  return binary;
}

void printBinary(vector<int> binary)
{
  for (int i = binary.size() - 1; i >= 0; i--)
  {
    cout << binary[i];
  }
  cout << endl;
}

int main()
{
  int decimal;

  cout << "Enter a decimal number: " << endl;
  cin >> decimal;

  vector<int> binary = decimalToBinary(decimal);

  cout << "Binary represantation: ";
  printBinary(binary);

  return 0;
}