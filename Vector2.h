#pragma once
#include <string>
#include <format>

class Vector2 {
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
                float roundedX = roundFloatToMinimumAccuracy(x);
                float roundedY = roundFloatToMinimumAccuracy(y);
                std::string formattedString = std::("({}, {})");
                return "X: " + std::to_string(roundedX) + " Y: " + std::to_string(roundedY);
            } catch(std::exception err) {
                return "Unable to convert Vector2 to string";
            }
        }

    private: 
        float roundFloatToMinimumAccuracy(float inputFloat) {
            char floatArray[7];
            sprintf(floatArray, "%f", inputFloat); // sets characterInput to each individual character of the input float using string formatting
            getSigFigs(floatArray);
        }

        int getSigFigs(char floatArray[7]) {
            for (int i = 7; i >= 0; i--) {
                if (floatArray[i] != '0') {
                    return i;
                }
            }
        }
};