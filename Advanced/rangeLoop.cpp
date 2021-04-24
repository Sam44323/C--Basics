#include <iostream>

using namespace std;

int main()
{
  int data[5] = {1, 2, 3, 4, 5};

  // range based loop (c++11 extension)
  for (int n : data)
  {
    cout << n << '\t';
  }
  cout << '\n';
  return 0;
}