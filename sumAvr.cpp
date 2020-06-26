#include <iostream>
#include <cmath>
using namespace std;

int sum(int, int, int);
float average(int, int, int);

int main(int argc, char const *argv[])
{
  int x, y, z;
  cout << " plz enter three numbers: " << endl;
  cin >> x >> y >> z;
  int resultA = sum(x, y, z);
  float resultB = average(x, y, z);
  cout << "this is the sumation of three numbers: " << resultA << endl;
  cout << "this is the avrage: " << resultB << endl;
  return 0;
}
// sum
int sum(int n1, int n2, int n3)
{
  return n1 + n2 + n3;
}

// arv
float average(int n1, int n2, int n3)
{
  return sum(n1, n2, n3) / 3;
}