#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int num, fact = 1;
  cout << " Enter a number: ";
  cin >> num;
  if (num < 0)
    cout << " positive number plz";
  else
  {
    for (int i = 1; i <= num; i++)
      fact = fact * i;
  }
  cout << " the factorial is: " << fact
       << "\n";
  return 0;
}
