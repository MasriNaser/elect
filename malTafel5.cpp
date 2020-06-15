#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
  int l = 5;
  int count = 10;
  for (size_t i = 1; i <= count; i++)
  {
    cout << l * i << endl;
  }

  return 0;
}
