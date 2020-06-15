#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int count = 10;
  int x = 2;
  for (size_t i = 0; i <= count; i++)
  {
    cout << i << " " << x * x << endl;
  }

  return 0;
}
