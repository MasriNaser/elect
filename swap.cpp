#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main(int argc, char const *argv[])
{
  int i = 10, j = 60;
  swap(i, j);
  cout << " i becomes " << i << endl;
  cout << " j becomes " << j << endl;
}

void swap(int &x, int &y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}