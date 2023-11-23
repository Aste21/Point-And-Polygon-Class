#include <iostream>
#include <iomanip>
#include "Point.h"

Point::Point()
    : x{0}, y{0}{}

Point::Point(double xNew, double yNew)
    : x{xNew}, y{yNew}{}

Point::Point(const Point &source)
    :x{source.x}, y{source.y} {}

std::ostream &operator<<(std::ostream &out, const Point &toWrite)
{
    const int Precision = 3;
	out << std::setprecision(Precision);
	out << "(" << toWrite.x << ", " << toWrite.y << ")";
    return out;
}