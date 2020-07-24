#include <iostream>
#include <string>
#include "Distance.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Distance d1;
  d1.print();
  d1.setDistance(7, 4.25);
  d1.print();
  Distance d2 = d1;
  d2.print();
  return 0;
}
