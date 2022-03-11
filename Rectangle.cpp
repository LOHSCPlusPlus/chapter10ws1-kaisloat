#include "Rectangle.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle(){
  Point a, b, c, d;
  Line AB(a, b), CD(c,d);
  length = AB;
  height = CD;
}

Rectangle::Rectangle(Line a, Line b){
  length = a;
  height = b;
}

void Rectangle::print(){
  cout << "Length line: " << endl;
  length.print();
  cout << endl << "Height line: " << endl;
  height.print();
  return;
}

double Rectangle::calcArea(){
  return (length.lineLength() * height.lineLength());
}
