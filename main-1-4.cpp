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

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = 3;
    int columns = 4;
    int scale = 2; 

    print_scaled_matrix(matrix, rows, columns, scale);

    return 0;
}
