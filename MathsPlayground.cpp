#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

int main() {
    std::cout << "Welcome to Maths Playground" << std::endl;
    Vector2 point2d = Vector2(2.429f, 4);
    Vector3 point3d = Vector3(8.93867f, 17.234f, 19);

    Vector2 point_1 = point2d * 2;

    std::cout << (point_1 * 2).toString() << std::endl;

    std::cout << "Vector2 Point: " << point2d.toString() << std::endl;
    std::cout << "Vector3 Point: " << point3d.toString() << std::endl;
    return 0;
}