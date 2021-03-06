#include "geometry.h"

double distance(double x1, double y1, double x2, double y2)
/* Written by: Dylan La Com
Returns the distance between two points.
*/
{
    double distance;

    distance = pow((pow((x2-x1), 2) + pow((y2-y1), 2)), 0.5);
    return distance;
}

double slope(double x1, double y1, double x2, double y2)
/* Written by: Shang Yi (Sam) Huang
Calculates the slope between two points.
*/
{
       double slope;
       slope=(y1-y2)/(x1-x2);
       return (slope);
}


double perpendicular(double slope)
/*
Written by: Davina Doedijono
Returns a slope perpendicular to the given slope
*/
{
     return (-1/slope);
}

double angle(double a, double b, double c)
/*
Written by: Davina Boedijono
Given a triangle with side lengths a,b and c, returns
the value of the angle opposite side c in degrees.
*/
{
     const double PI = 4.0*atan(1.0);
     return ((acos((pow(a,2.0)+pow(b,2.0)-pow(c,2.0))/(2*a*b)))*180/PI);
}


void segment(double x1, double y1, double slope, double distance, double& x2, double& y2)
/*
Written by: Pui Yee Lee
Calculates the coordinates the point which forms the line segment at the specified slope
and distance from (x1,y1).  A positive distance gives x2 > x1, and negative distance
gives x2 < x1
*/
{
     x2=(distance/sqrt(1+slope*slope))+x1;
     y2=slope*(x2-x1)+y1;
}
