#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int x;
  do
  {
    x = 9;
    if (x % 2 == 1 && x < 0)
      cout << x;
  } while (x != 9);
  cout<< "not 9";

  return 0;
}
