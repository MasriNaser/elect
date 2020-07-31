#include "car.h"

int Car::count = 0;

void Car::setMaker(string m)
{
  maker = m;
}

string Car::getMaker()
{
  return maker;
}
//
void Car::setModel(int m)
{
  model = m;
}

int Car::getModel()
{
  return model;
}
//
void Car::setColor(string c)
{
  color = c;
}

string Car::getColor()
{
  return color;
}
//
int Car::GetCarscount()
{
  return count++;
}
//
void Car::print()
{
  cout << "Counter= " << count << endl
       << "Model= " << model << endl
       << "Maker= " << maker << endl
       << "Color= " << color << endl;
}
