#include <iostream>
#include <string>

using namespace std;

int main()
{
  string greetings;
  int number;
  cout << "Enter the greetings" << endl;
  getline(cin, greetings);
  cout << greetings << endl;
  return 0;
}