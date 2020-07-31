#include <iostream>
#include <string>
using namespace std;

// :: coop operator
// satic i can reach it out of the class
// utility classes is methods i will use often
class Car
{
private:
  string maker;
  int model;
  string color;
  static int count;

public:
  void setMaker(string m);
  string getMaker();
  void setModel(int m);
  int getModel();
  void setColor(string c);
  string getColor();
  int GetCarscount();
  void print();
};