#include <iostream>

void count_numbers(int matrix[10][10]) {
    int count[10] = {0}; 

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int num = matrix[i][j];
            count[num]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        std::cout << i << ":" << count[i];
        if (i < 9) {
            std::cout << ";";
        }
    }
    std::cout << std::endl;
}

int main() {
    int matrix[10][10] = {
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    };

    count_numbers(matrix);

    return 0;
}
