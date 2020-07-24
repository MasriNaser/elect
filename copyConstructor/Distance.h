#include <iostream>
#include <string>
using namespace std;

class Distance
{
private:
  int feet;
  float inch;

public:
  void setDistance(int f, float i);
  void print();
  Distance add_distance(Distance x);
};
