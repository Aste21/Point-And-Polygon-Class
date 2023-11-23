#include <iostream>
#include <iomanip>
#include <cmath>
#include "Point.h"

#pragma once

class Polygon
{
        friend std::ostream &operator<<(std::ostream &out, const Polygon &toWrite);
        friend Polygon operator+(const Polygon &lhs, const Point &rhs);
    private:
        Point* points;
        size_t numberOfPoints;
    public:
        Polygon();
        ~Polygon();
        void add(Point point);
        Point& operator[](int n);
        Polygon& operator=(const Polygon &rhs);
};