#include "Line.h"
#include <iostream>
using namespace std;

int main() {
  Point a;
  Point b(6, 8);
  Line AB(a, b);
  AB.print();
  cout << "Length of line AB: " << AB.lineLength() << endl;
  
  return 0;
}
