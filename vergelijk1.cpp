#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int x, y, z;
  do
  {
    cin >> x >> z;
    y = x * x + 2 * z * z - 3 * x + 4;
    cout << y;

  } while (y != 25);

  return 0;
}
