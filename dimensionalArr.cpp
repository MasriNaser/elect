#include <iostream>
using namespace std;

void printMatrix(int[][3], int rows);
int main(int argc, char const *argv[])
{
  int marks[5][3];
  for (int row = 0; row < 5; row++)
    for (int col = 0; col < 3; col++)
    {
      cout << "Enter value for item" << row << "," << col << endl;
      cin >> marks[row][col];
    }
  int sum = 0;
  for (int row = 0; row < 5; row++)
    for (int col = 0; col < 3; col++)
    {
      sum += marks[row][col];
    }
  int sumDiagnoal = 0;
  for (int row = 0; row < 5; row++)
    for (int col = 0; col < 3; col++)
    {
      if (row == col)
        sumDiagnoal += marks[row][col];
    }
  cout << " the sum is: " << sum << endl;
  cout << " the sum is for all sumDiagnoal is : " << sumDiagnoal << endl;
  printMatrix(marks, 3);
}

void printMatrix(int arr[][3], int rows)
{
  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      cout << arr[row][col] << endl;
    }
    cout << endl;
  }
}