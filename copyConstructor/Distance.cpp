#include <iostream>
#include <string>
#include "Distance.h"
using namespace std;


void Distance::setDistance(int f, float i)
{
  feet = f;
  inch = i;
}

void Distance::print()
{
  cout << "Feet= " << feet << endl
       << "inches = " << inch << endl;
}
