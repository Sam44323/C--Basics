#include <iostream>
#include <array>

using namespace std;

// can be passed as a value like a vector
void printSTL(array<int, 5> data)
{
  for (int i = 0; i < data.size(); i++)
  {
    cout << data[i] << " ";
  }
}

int main()
{
  array<int, 5> data = {1, 2, 4, 17, 13}; // declaring a templatized array, it is statically sized
  printSTL(data);
  cout << "" << endl;
  return 0;
}