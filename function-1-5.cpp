#include <iostream>

void print_summed(int array1[3][3], int array2[3][3]) {
    int result[3][3];

    // Add the elements of array1 and array2 to the corresponding elements of the result array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}