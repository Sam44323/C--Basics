#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// passing the param by value
void printVector(vector<int> data)
{
  for (int i = 0; i < data.size(); i++)
  {
    cout << data[i] << " ";
  }
}

// passing the pointer of the data structure
vector<int> printTriple(vector<int> &data)
{
  for (int i = 0; i < data.size(); i++)
  {
    data[i] = pow(data[i], 3);
  }
  return data;
}

int main()
{
  vector<int> data = {1, 2, 4};
  printVector(data);
  cout << "" << endl;
  data = printTriple(data);
  printVector(data);
  cout << "" << endl;
  return 0;
}