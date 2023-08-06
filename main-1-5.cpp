#include <iostream>

extern void print_summed(int array1[3][3], int array2[3][3]);

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

    std::cout << "Sum of Matrices:" << std::endl;
    print_summed(array1, array2);

    return 0;
}