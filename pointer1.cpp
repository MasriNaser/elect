#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int i = 17;
  int *pot;
  pot = &i;
  cout << " This is the addres of i: " << pot << endl;
  cout << " This is the value of pointer : " << *pot << endl;
  *pot += 10;
  cout << i << endl;
  cout << *pot << endl;
  return 0;
}
