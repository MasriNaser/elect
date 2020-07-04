#include <iostream>
using namespace std;

class RectangClass
{
private:
  float length;
  float width;

public:
  void setLength(float l)
  {
    if (l >= 0)
      length = l;
    else
      cout << " Enter a povitive value: " << endl;
  }
  float getLength()
  {
    return length;
  }
  // checck width
public:
  void setWidth(float w)
  {
    if (w >= 0)
      width = w;
    else
      cout << " Enter a povitive value: " << endl;
  }
  float getWidth()
  {
    return width;
  }
  // getArea
  float getArea()
  {
    return length * width;
  }
};
// main
int main()
{
  RectangClass box;
  box.setLength(40.5);
  box.setWidth(30.6);
  float area = box.getArea();
  cout << " The rectangle area is: " << area << endl;
  return 0;
}
