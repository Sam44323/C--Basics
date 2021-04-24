#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
  int data[5] = {1, 2, 3, 4, 5};
  vector<int> values = {1, 2, 3, 4, 5};
  array<int, 5> STL = {1, 2, 3, 4, 5};

  // range based loop (c++11 extension)
  cout << "Arrays" << endl;
  for (int n : data)
  {
    cout << n << '\t';
  }
  cout << '\n';
  cout << "Vectors" << endl;
  for (int n : values)
  {
    cout << n << '\t';
  }
  cout << '\n';
  cout << "STL Arrays" << endl;
  for (int n : STL)
  {
    cout << n << '\t';
  }
  cout << '\n';
  return 0;
}