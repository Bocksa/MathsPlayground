#include <iostream>
#include "Vector2.h"

int main() {
    std::cout << "Welcome to Maths Playground" << std::endl;
    Vector2* point = new Vector2(2.429f, 4);
    std::cout << point->toString() << std::endl;
    return 0;
}