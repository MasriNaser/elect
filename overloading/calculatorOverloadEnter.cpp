#include <iostream>
#include <string>
#include "calculatorOverload.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  calculatorOverload c1;
  // cz of the static i dont need to create an object to use the method mal
  int res5 = calculatorOverload::mal(2, 5);
  cout << "Mult: " << res5 << endl;
  int res1 = c1.add(3, 7);
  cout << " this is the version1: " << res1 << endl;
  int res2 = c1.add(3, 7, 10);
  cout << " this is the version2: " << res2 << endl;
  string res3 = c1.add("Hello", "Naser");
  cout << " this is the version3: " << res3 << endl;
  return 0;
}
