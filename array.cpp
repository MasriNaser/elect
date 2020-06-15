#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int arr[3];
  int max;
  for (size_t i = 0; i < 3; i++)
  {
    cin >> arr[i];
    max = arr[0];
    for (size_t i = 0; i < 3; i++)
    {
      if (max < arr[i])
      {
        max = arr[i];
      }
    }
  }

  return 0;
}
