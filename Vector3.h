#pragma once

#include <string>
#include "Vector.h"

class Vector3 : private Vector {
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

    Vector3(int X, float Y, float Z) {
        x = float(X);
        y = Y;
        z = Z;
    }

    Vector3(int X, int Y, float Z) {
        x = float(X);
        y = float(Y);
        z = Z;
    }

    Vector3(float X, int Y, float Z) {
        x = float(X);
        y = Y;
        z = float(Z);
    }

    Vector3(float X, int Y, int Z) {
        x = X;
        y = float(Y);
        z = float(Z);
    }

    Vector3(float X, float Y, int Z) {
        x = X;
        y = Y;
        z = float(Z);
    }

    Vector3(int X, float Y, int Z) {
        x = float(X);
        y = Y;
        z = float(Z);
    }

    ~Vector3() {
        delete& x;
        delete& y;
        delete& z;
    }

    std::string toString() {
        try {
            std::string roundedX = roundFloatToMinimumAccuracyAsString(x);
            std::string roundedY = roundFloatToMinimumAccuracyAsString(y);
            std::string roundedZ = roundFloatToMinimumAccuracyAsString(z);

            return "(" + roundedX + ", " + roundedY + ", " + roundedZ + ")";
        } catch (std::exception err) {
            return "Unable to convert Vector2 to string";
        }
    }
};