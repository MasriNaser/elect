#include <iostream>
using namespace std;

struct structEmployee
{
  int emplonumber;
  string fname;
  string lname;
  float salary;
  float bonus;
  float net_salary;
};

int main(int argc, char const *argv[])
{
  structEmployee e1, e2;
  e1.emplonumber = 10;
  e1.fname = "Ahmad";
  e1.lname = "Masri";
  e1.salary = 2000;
  e1.bonus = 400;
  e1.net_salary = e1.salary + e1.bonus;
  e2 = e1;
  cout << "this is the e1: " << e1.fname << endl;
  cout << "this is the e1: " << e2.fname << endl;
  return 0;
}
