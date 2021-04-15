#include <iostream>
#include <string>

using namespace std;

int main()
{
  string sentence = "What the hell!";
  cout << sentence.length() << endl;
  cout << sentence.replace(9, 13, ".") << endl;
  sentence.pop_back();
  cout << sentence << endl;
  return 0;
}