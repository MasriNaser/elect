#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float calc_average(float arr[], int size);

int main(int argc, char const *argv[])
{
  float marks[5] = {70, 300, 80, 60, 50};
  double result = calc_average(marks, 5);
  cout << result << endl;

  return 0;
}

float calc_average(float arr[], int size)
{
  float sum = 0.0;
  for (int i = 0; i < size; i++)
    sum += arr[i];
  return sum / size;
}
