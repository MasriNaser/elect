#include <string>
using namespace std;

// use static to dont have to create an object every time i need to  use the method.
class calculatorOverload

{
private:
  /* data */
public:
  int add(int num1, int num2);
  static int mal(int num1, int num2);
  int add(int num1, int num2, int num3);
  float add(float num1, float num2);
  string add(string a, string b);
};

