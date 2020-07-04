#include <iostream>
#include "Car.cpp"

int main()
{
  Car c1;
  c1.setMaker("Honda");
  c1.setModel(2020);
  cout << " This car made by: " << c1.getMaker() << endl;
  cout << " This car model: " << c1.getModel() << endl;
  return 0;
}
