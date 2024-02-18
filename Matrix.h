#pragma once

#include <vector>
#include <algorithm>

class Matrix {
    public:
        std::vector<std::vector<int> > matrix;
        Matrix(int rowCount, int columnCount) {
            std::vector<int> rows(rowCount);
            std::vector<int> colums(columnCount);

            matrix.insert(matrix.end(), rows.begin(), rows.end());
            matrix.insert(matrix.end(), colums.begin(), colums.end());
        }

        Matrix operator* (float multiplier) {

        }
};