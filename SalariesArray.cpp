#include <iostream>
using namespace std;
int main(int argc, const char **argv)
{
  const int size = 7;
  int list[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Entr Item value\n";
    cin >> list[i];
  }

  cout << size;
  return 0;
}
