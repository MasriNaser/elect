#include <iostream>
#include <string>
using namespace std;

// struct
struct distance_type
{
  int feet;
  float inches;
};
// decleration of fun
distance_type add_distance(distance_type d1, distance_type d2)
{
  distance_type result;
  result.feet = d1.feet + d2.feet;
  result.inches = d1.inches + d2.inches;
  return result;
};

int main(int argc, char const *argv[])
{
  distance_type x, y, z;
  cout << " Enter feet and inches for the first distance: " << endl;
  cin >> x.feet >> x.inches;
  cout << " Enter feet and inches for the second distance: " << endl;
  cin >> y.feet >> y.inches;
  z = add_distance(x, y);
  cout << z.feet << "  " << z.inches << endl;
  return 0;
}

