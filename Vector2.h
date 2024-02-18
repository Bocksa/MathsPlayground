#pragma once

#include <string>
#include "Vector.h"

class Vector2 : private Vector {
    public:
        float x;
        float y;

        Vector2() {
            x = 0.00f;
            y = 0.00f;
        }

        Vector2(float X, float Y) {
            x = X;
            y = Y;
        }

        Vector2(int X, int Y) {
            x = float(X);
            y = float(Y);
        }

        // retard proofing below

        Vector2(float X, int Y) {
            x = X;
            y = float(Y);
        }

        Vector2(int X, float Y) {
            x = float(X);
            y = Y;
        }

        // retard proofing has concluded

        ~Vector2() {
            delete& x;
            delete& y;
        }

        std::string toString() {
            try {
                std::string roundedX = roundFloatToMinimumAccuracyAsString(x);
                std::string roundedY = roundFloatToMinimumAccuracyAsString(y);

                return "(" + roundedX + ", " + roundedY + ")";
            } catch(std::exception err) {
                return "Unable to convert Vector2 to string";
            }
        }

        Vector2 operator* (float multiplier) {
            return Vector2(this->x * multiplier, this->x * multiplier);
        }
};