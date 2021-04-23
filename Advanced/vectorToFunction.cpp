#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> data)
{
  for (int i = 0; i < data.size(); i++)
  {
    cout << data[i] << endl;
  }
}

int main()
{
  vector<int> data = {1, 2, 4};
  printVector(data);
  return 0;
}