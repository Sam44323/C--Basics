#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> values = {1, 2, 3};
  values.push_back(4);
  cout << values[values.size() - 1] << endl;
  return 0;
}