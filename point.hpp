/* Point class module */
#include <iostream>

class Point 
{
    int x;
    int y;

public:
  
    // Default constructor
    Point() {
        this->x = 0;
        this->y = 0;
    }
  
    // Constructor with XY params
    Point(int new_x, int new_y) {
        this->x = new_x;
        this->y = new_y;
    }

    // Copy constructor
    Point(Point& p2) {
        this->x = p2.x;
        this->y = p2.y;
    }

    // Print XY on console
    void show() {
        std::cout << "X = " << x << "; Y = " << y << std::endl;
    }
};
