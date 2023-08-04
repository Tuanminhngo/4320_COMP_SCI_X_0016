#include <iostream>

void add_arrays(int array1[3][3], int array2[3][3], int rows, int columns) {
    int result[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Print the result array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}