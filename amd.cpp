#include <iostream>

using namespace std;
int main()
{
  int x, y, a, s, m;
  float d;
  x = 1;
  y = 2;
  a = x + y;
  s = y - x;
  m = x * y;
  d = x / y;
  cout << a << " adding" << endl
       << s << " sub" << endl
       << m << "multi" << endl
       << d << "divid";
}