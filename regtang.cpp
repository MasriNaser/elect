#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
  int count;
  count = 5;
  for (size_t i = 1; i >= count; i--)
  {
    cout << i;
  }
}