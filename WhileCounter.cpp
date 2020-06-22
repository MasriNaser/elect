#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int counter = 0, sum = 0, grade = 0;
  while (counter <= 3 && grade != -1)
  {
    cout << " Enter student grade \n";
    cin >> grade;
    sum += grade;
    counter++;
  }
  cout << "Avr grade = " << sum / 3 << "\n";

  return 0;
}
// do while it will excute once at least!