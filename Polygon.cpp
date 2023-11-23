#include <iostream>
#include <iomanip>
#include "Polygon.h"

Polygon::Polygon()
    :points{NULL}, numberOfPoints{0}{}

Polygon::~Polygon()
{
    free(points);
}

std::ostream &operator<<(std::ostream &out, const Polygon &toWrite)
{
    for (size_t i = 0; i < toWrite.numberOfPoints; i++)
    {
        out << "point " << i << ": " << toWrite.points[i];
        if (i != toWrite.numberOfPoints - 1)
        {
            out << std::endl;
        }
    }
    return out;
}

Polygon& Polygon::operator=(const Polygon &rhs)
{
    numberOfPoints = rhs.numberOfPoints;
    points = (Point*)realloc(points, numberOfPoints * sizeof(Point));
    if (points == NULL)
    {
        std::cout << "Error during memory allocation, closing program...";
        abort();
    }
    for(size_t i = 0;i < numberOfPoints; i++)
    {
        points[i] = Point(rhs.points[i]);
    }
    return *this;
}

Polygon operator+(const Polygon &lhs, const Point &rhs)
{
    Polygon result;
    for (size_t i = 0; i < lhs.numberOfPoints; i++)
    {
        result.add(Point(lhs.points[i].x+rhs.x, lhs.points[i].y+rhs.y));
    }
    return result;
}

void Polygon::add(Point point)
{
    numberOfPoints += 1;
    points = (Point*)realloc(points, numberOfPoints * sizeof(Point));
    if (points == NULL)
    {
        std::cout << "Error during memory allocation, closing program...";
        abort();
    }
    points[numberOfPoints-1] = point;
}

Point &Polygon::operator[](int n)
{
    return points[n];
}
