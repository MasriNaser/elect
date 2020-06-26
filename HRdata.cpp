#include <iostream>
#include <string>
using namespace std;

// struct
struct employee
{
  int employeeNumber;
  string employeeName;
  string employeeJob;
  float employeeSalary;
  float employeeBouns;
};
// decleartion of functions
void get_data(employee arr[], int size);
void set_bouns(employee &e, float precent);
void print(employee arr[], int size);

int main(int argc, char const *argv[])
{
  employee emps[3];
  get_data(emps, 3);
  set_bouns(emps[1], 0.10f);
  print(emps, 3);
  return 0;
}

//  defintion get data
void get_data(employee arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << " Enter employee numer,name,job " << i + 1 << endl;
    cin >> arr[i].employeeNumber >> arr[i].employeeName >> arr[i].employeeJob;
    if (arr[i].employeeJob == "Manager")
      arr[i].employeeSalary = 5000;
    else if (arr[i].employeeJob == "Engineer")
      arr[i].employeeSalary = 3000;
    else if (arr[i].employeeJob == "Clerk")
      arr[i].employeeSalary = 2000;
    else
      arr[i].employeeSalary = 1000;
  }
}
// defintion bouns
void set_bouns(employee &e, float precent)
{
  e.employeeBouns = e.employeeSalary * precent;
}

// defination print
void print(employee arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << " Emp number: " << arr[i].employeeNumber << endl;
    cout << " Emp name: " << arr[i].employeeName << endl;
    cout << " Emp job: " << arr[i].employeeJob << endl;
    cout << " Emp salary: " << arr[i].employeeSalary << endl;
    cout << " Emp bouns: " << arr[i].employeeBouns << endl;
    cout << " Emp total salary: " << arr[i].employeeSalary + arr[i].employeeBouns << endl;
    cout << "***********************************************************************" << endl;
  }
}