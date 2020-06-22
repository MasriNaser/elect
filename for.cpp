#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int count = 10, x;
  for (size_t i = 0; i <= count; i += 2)
  {
    cout << "Enter a number: ";
    cin >> x;
    cout << i << " " << x * x << endl;
  }

  return 0;
}
