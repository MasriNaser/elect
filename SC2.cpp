#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  char letter = 'x';
  cout << "Enter a letter: ";
  cin >> letter;
  switch (letter)
  {
  case 'v':
    cout << "this is first\n";
    break;
  case 'r':
    cout << "this is second\n";
    break;
  case 't':
    cout << "this is third\n";
    break;
  case 'l':
    cout << "this is fourth\n";
    break;

  default:
    cout << "Am default\n";
    break;
  }
  return 0;
}
