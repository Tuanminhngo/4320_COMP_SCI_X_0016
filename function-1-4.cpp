#include <iostream>

void print_scaled_matrix(int matrix[][4], int rows, int columns, int scale) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] *= scale;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}