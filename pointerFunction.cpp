// by value: voidf(int x)==> i send value for x that in the end of the fun the value will go back as it was(it will not change)/the copy it will be changed.
// by reference: voidf(int &x)==> value of x will change when the fun its done.
// by pointer: voidf(int *x)==> value of x will change when the fun its done.
#include <iostream>
using namespace std;

// using reference
// deaclrtion fun
void swap(double &x, double &y)
{
  double tmp = x;
  // access var by its alias name
  x = y;
  y = tmp;
}
// using pointers
void swapPointer(double *ptr1, double *ptr2)
{
  double tmp = *ptr1;
  // de-refrecing pointer
  *ptr1 = *ptr2;
  *ptr2 = tmp;
}
// main
int main(int argc, char const *argv[])
{
  double a = 345;
  double b = 555;
  swap(a, b);
  cout << "swap it: " << a << " swap it: " << b << endl;
  cout << "----------------------------" << endl;
  // call swapPointer
  swapPointer(&a, &b);
  cout << "back " << a << " back " << b << endl;
  return 0;
}
