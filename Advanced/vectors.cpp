#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> values = {1, 2, 3};
  values.push_back(13);
  cout << values[values.size() - 1] << endl;
  values.pop_back();
  cout << values.size() << endl;
  return 0;
}