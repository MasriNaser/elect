// array can be accessed using pointers.
// array can be accessed using index.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  char msg[] = "Hello";
  char *ptr;
  ptr = msg;
  *ptr = 'N';
  ptr++;
  *ptr = 'A';
  cout << ptr << endl;
  cout << msg << endl;
  ptr += 2;
  *ptr = 'K';
  cout << msg << endl;
  // array access index
  int arr[3] = {23, 45, 67};
  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << endl;
    cout << "*****************" << endl;
  }
  // array access pointer
  int aarPointer[3] = {23, 45, 67};
  for (int i = 0; i < 3; i++)
  {
    cout << *(aarPointer + i) << endl;
  }

  return 0;
}
