#include "Line.h"

class Rectangle{
  private:
    Line length;
    Line height;
  public:
    Rectangle();
    Rectangle(Line l, Line h);
    double calcArea();
    void print();
};