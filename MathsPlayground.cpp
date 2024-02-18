#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

int main() {
    std::cout << "Welcome to Maths Playground" << std::endl;
    Vector2* point2d = new Vector2(2.429f, 4);
    Vector3* point3d = new Vector3(8.93867f, 17.234f, 19);
    std::cout << "Vector2 Point: " << point2d->toString() << std::endl;
    std::cout << "Vector3 Point: " << point3d->toString() << std::endl;
    return 0;
}