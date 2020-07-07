#include <iostream>
#include "Car.cpp"

int main()
{
  Car c1;
  c1.setMaker("Honda");
  c1.setModel(2020);
  c1.setColor("Red");
  cout << " This car made by: " << c1.getMaker() << endl;
  cout << " This car model: " << c1.getModel() << endl;
  cout << " This car color is: " << c1.getColor() << endl;
  return 0;
}
