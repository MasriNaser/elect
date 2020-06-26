#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool find_item(int arr[], int size, int searched);
int main(int argc, char const *argv[])
{
  int x;
  int items[] = {10, 20, 30, 40, 50, 60};
  cout << "Enter item to find" << endl;
  cin >> x;
  if (find_item(items, 5, x) == true)
    cout << "this is the found" << endl;
  else
    cout << "not found" << endl;
  return 0;
}

bool find_item(int arr[], int size, int searched)
{
  bool found = false;
  for (int i = 0; i <= size; i++)
    if (arr[i] == searched)
      found = true;
  return found;
}