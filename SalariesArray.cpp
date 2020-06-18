#include <iostream>
using namespace std;
int main(int argc, const char **argv)
{
  const int size = 3;
  int salary[size];
  float sum = 0.0;
  for (int i = 0; i < size; i++)
  {
    cout << "Entr salary number:" << i + 1 << "\n";
    cin >> salary[i];
  }
  for (int j = 0; j <= 3; j++)
  {
    salary[j] += salary[j] * 2;
  }
  for (int x = 0; x < 3; x++)
  {
    sum += salary[x];
  }

  cout << " The Av salis: " << sum / size << "\n";
  return 0;
}
