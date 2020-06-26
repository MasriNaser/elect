#include <iostream>
#include <cmath>
using namespace std;

int larger(int, int);

int main(int argc, char const *argv[])
{
  int x, y;
  cout << " Enter 2 numbers" << endl;
  cin >> x >> y;
  int result = larger(x, y);
  cout << " the larger is: " << result << endl;
  return 0;
}

int larger(int num1, int num2)
{
  if (num1 >= num2)
    return num1;
  else
    return num2;
}