#include <iostream>
#include <string>
using namespace std;

// init car class
class Car
{
private:
  string maker;
  int model;
  string color;

public:
  void setMaker(string m);
  string getMaker();
  void setModel(int x);
  int getModel();
  void setColor(string x);
  string getColor();
};
