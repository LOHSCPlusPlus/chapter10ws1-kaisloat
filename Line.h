#include "Point.h"

class Line{
  private:
    Point start;
    Point end;
  public:
    Line(Point s, Point e);
    void print();
    double lineLength();

};

