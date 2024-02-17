#pragma once
#include <string>

class Vector3 {
public:
    float x;
    float y;
    float z;

    Vector3() {
        x = 0.00f;
        y = 0.00f;
        z = 0.00f;
    }

    Vector3(float X, float Y, float Z) {
        x = X;
        y = Y;
        z = Z;
    }

    Vector3(int X, int Y, int Z) {
        x = float(X);
        y = float(Y);
        z = float(Z);
    }

    ~Vector3() {
        delete& x;
        delete& y;
        delete& z;
    }

    std::string toString() {
        try {
            return "X: " + std::to_string(x) + " Y: " + std::to_string(y) + " Z: " + std::to_string(z);
        } catch (std::exception err) {
            return "Unable to convert Vector2 to string";
        }
    }
};