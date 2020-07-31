#include <iostream>
#include "car.cpp"

int main()
{
  Car c1;
  c1.GetCarscount();
  c1.setMaker("Honda");
  c1.setModel(2020);
  c1.setColor("Red");
  c1.print();
  //
  Car c2;
  c2.GetCarscount();
  c2.setMaker("Toyota");
  c2.setModel(1987);
  c2.setColor("Gray");
  c2.print();
  return 0;
}