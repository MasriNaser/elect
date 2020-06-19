#include <iostream>
using namespace std;
int main(int argc, const char **argv)
{
  int i;
  cout << "Enter a number: ";
  cin >> i;
  switch (i + 10)
  {
  case 5:
  case 10:
    cout << "your in case one\n";
    break;
  case 20:
    cout << "your in case two\n";
    break;
  case 30:
    cout << "your in case three\n";
    break;

  default:
    cout << "Am in default case\n";
    break;
  }
  return 0;
}