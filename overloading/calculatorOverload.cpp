#include <iostream>
#include <string>
#include "calculatorOverload.h"
using namespace std;

int calculatorOverload::add(int num1, int num2)
{
  return num1 + num2;
}

int calculatorOverload::add(int num1, int num2, int num3)
{
  return num1 + num2 + num3;
}

float calculatorOverload::add(float num1, float num2)
{
  return num1 + num2;
}

string calculatorOverload::add(string a, string b)
{
  return a + " " + b;
}