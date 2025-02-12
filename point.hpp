/* Point class module */
#include <iostream>

class Point 
{
    int x;
    int y;

public:
    // Constructor
    Point(int new_x, int new_y) {
        this->x = new_x;
        this->y = new_y;
    }

    // Print XY on console
    void show() {
        std::cout << "X = " << x << "; Y = " << y << std::endl;
    }
};
