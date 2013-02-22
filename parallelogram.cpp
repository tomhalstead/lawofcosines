#include "parallelogram.h"
#include <iostream>
#include <math.h>
using namespace std;

parallelogram::Parallelogram(const Point& p1, const Point& p2, const Point& p3);
{
    Point p4;
    p4.X = p1.X - p2.X + p3.X;
    p4.Y = p1.Y - p2.Y + p3.Y;
    element(0) = p1;
    element(1) = p2;
    element(2) = p3;
    element(3) = p4;
}