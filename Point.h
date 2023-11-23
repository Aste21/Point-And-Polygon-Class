#include <iostream>
#include <iomanip>
#include <cmath>

#pragma once

class Point
{
        friend std::ostream &operator<<(std::ostream &out, const Point &toWrite);
    private:
        
    public:
        double x;
        double y;
        Point();
        Point(double xNew, double yNew);
        Point(const Point &source);
};