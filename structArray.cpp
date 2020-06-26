#include <iostream>
#include <string>
using namespace std;

// struct
struct student
{
  int studentno;
  string name;
  float gpa;
  float marks[3];
};

int main(int argc, char const *argv[])
{
  student s1, x[5];
  s1.studentno = 1985;
  s1.name = "Naser Msri";
  s1.gpa = 4.5;
  s1.marks[0] = 50;
  s1.marks[1] = 60;
  s1.marks[2] = 90;
  // dif x
  x[0].studentno = 403;
  x[0].name = "Naser";
  x[0].gpa = 120.4;
  x[0].marks[0] = 67;
  // loop throw student x
  for (int i = 0; i < 5; i++)
  {
    cout << " Enter info of student x: " << i + 1 << endl;
    cin >> x[i].studentno >> x[i].name >> x[i].gpa;
  }

  return 0;
}
