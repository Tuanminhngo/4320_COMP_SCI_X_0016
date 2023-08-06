#include <iostream>

extern void print_scaled(int array[3][3], int scale);

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int scale = 2;

    std::cout << "Scaled Matrix:" << std::endl;
    print_scaled(matrix, scale);

    return 0;
}
