#pragma once

#include "Vector2.h"

class Line2D {
    public:
        float slope;
        float constant;

        Line2D(float Slope, float Constant) {
            slope = Slope;
            constant = Constant;
        }
        
        Line2D(Vector2* point_1, Vector2* point_2) {
            slope = (point_2->y - point_1->y) / (point_2->x - point_1->x);
            constant = (slope * point_1->x) + point_1->y;
        }

        float GetYFromX(float* x) {
            return (slope * *x) + constant;
        }

        float GetXFromY(float* y) {
            return (*y - constant) / slope;
        }

        ~Line2D() {
            delete& slope;
            delete& constant;
        }
};

