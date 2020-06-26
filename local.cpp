#include <iostream>
using namespace std;
int x = 10;
int main(int argc, char const *argv[])
{
  int x = 5;
  cout << "globale " << ::x << endl;
  cout << "inner local: " << x << endl;
  return 0;
}
