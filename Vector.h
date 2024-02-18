#pragma once

#include <string>

class Vector {
    public:
        std::string roundFloatToMinimumAccuracyAsString(float inputFloat) {
            std::string floatString = std::to_string(inputFloat);
            std::string formattedString = floatString.erase(getSignificantFigures(floatString) + 1, 7);

            if (formattedString.ends_with('.')) {
                formattedString = formattedString + '0';
            }

            return formattedString;
        }

        int getSignificantFigures(std::string floatString) {
            for (int i = 7; i >= 0; i--) {
                if (floatString[i] != '0') {
                    return i;
                }
            }
        }
};