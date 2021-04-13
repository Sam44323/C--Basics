#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void printSum(int a, int b)
{
  cout << "Sum for the numbers is " << a + b << endl;
}

int main()
{
  int num1, num2;
  cout << "Enter the first number" << endl;
  cin >> num1;
  cout << "First number " << num1 << endl;
  cout << "Enter the second number" << endl;
  cin >> num2;
  cout << "Second number " << num2 << endl;
  printSum(num1, num2);
  return 0;
}