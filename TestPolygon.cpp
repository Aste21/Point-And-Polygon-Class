#include <iostream>
#include <iomanip>
#include "Polygon.h"

int main()
{
    Point point1;
    point1.x = 1.5;
    point1.y = 2;
    std::cout<< "point1: "<< point1 << std::endl;
    Point point2(5.5, 2);
    std::cout<<"point2: "<<point2<<std::endl;
    Polygon polygon1;
    polygon1.add(point1);
    polygon1.add(point2);

    std::cout<<"polygon1: "<<std::endl<<polygon1<<std::endl;
    polygon1.add(Point(1.5, 4.3));
    std::cout<<"polygon1: "<<std::endl<<polygon1<<std::endl;

    Point vector(-0.5, 1);
    Polygon polygon2;
    polygon2 = polygon1 + vector;
    std::cout<<"polygon2: "<<std::endl<<polygon2<<std::endl;
    polygon2[0] = Point(0.3, 2.5);
    polygon2[1].x = 0.7;
    std::cout<<"polygon2: "<<std::endl<<polygon2<<std::endl;

}
