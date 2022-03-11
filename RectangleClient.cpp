#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
  Point a;
  Point b(5, 0);
  Point c(5, 5);
  Line AB(a, b);
  Line BC(b, c);
  Rectangle ABC(AB, BC);
  ABC.print();
  cout << "Rectangle area: " << ABC.calcArea() << endl;
  return 0;
}
