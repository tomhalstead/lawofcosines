#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
#include "point.h"

/* Assigned to: Apineh Asadoorian */

class Polygon {
public:
    Polygon(unsigned int size = 1);
    Polygon(const Polygon& other);
    Polygon& operator=(const Polygon& other);
    ~Polygon();
    unsigned int Size() const;
    Point Element(unsigned int i) const;
    void Translate(double X, double Y);
protected:
    Point& element(unsigned int i);
private:
    std::vector<Point> pointsVector;
};

#endif // POLYGON_H
