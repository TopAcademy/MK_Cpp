#include <iostream>
#include "point.hpp"

int main()
{
    Point p1;
    Point p2(10, 20);
    Point p3(p2);

    p1.show();
    p2.show();
    p3.show();
}
