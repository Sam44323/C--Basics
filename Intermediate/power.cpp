#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

// declaring the function

void calulatePower(double base, int exp)
{
  cout << "Ouput for the required details is as followed " << pow(base, exp) << endl;
}

int main()
{
  double num1;
  int exp;
  cout << "Enter the number" << endl;
  cin >> num1;
  cout << "Enter the exponent" << endl;
  cin >> exp;
  calulatePower(num1, exp);
  return 0;
}