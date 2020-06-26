#include <iostream>
#include <cmath>
using namespace std;

float area(int r);
float volume(int r);

int main(int argc, char const *argv[])
{
  int r;
  cout << " plz add reduis of the sphere: " << endl;
  cin >> r;
  float resultA = area(r);
  float resultV = volume(r);
  cout << "this is the area: " << resultA << endl;
  cout << "this is the volume: " << resultV << endl;
  return 0;
}
// oppervlakte
float area(int r)
{
  return 4 * 3.14 * r * r;
}

// volume
float volume(int r)
{
  return 4 / 3 * 3.14 * r * r * r;
}