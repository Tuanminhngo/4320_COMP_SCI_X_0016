#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main() {
    int array[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 3}
    };

    std::cout << "Matrix Diagonal Sum: " << sum_diagonal(array) << std::endl;

    return 0;
}
