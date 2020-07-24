#include <iostream>
#include <string>
#include "Distance.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Distance d1;
  d1.setDistance(7, 4.25);
  Distance d2 = d1;
  d2.print();
  Distance d3 = d1.add_distance(d2);
  d3.print();
  return 0;
}
