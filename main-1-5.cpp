#include <iostream>

void add_arrays(int array1[3][3], int array2[3][3], int rows, int columns) {
    int result[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int rows = 3;
    int columns = 3;

    add_arrays(array1, array2, rows, columns);

    return 0;
}
