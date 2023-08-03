#include <iostream>

void count_numbers(int matrix[10][10]) {
    int count[10] = {0}; // Initialize count array with zeros

    // Traverse the matrix and count the occurrences of each number
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int num = matrix[i][j];
            count[num]++;
        }
    }

    // Print the results
    for (int i = 0; i < 10; i++) {
        std::cout << i << ":" << count[i];
        if (i < 9) {
            std::cout << ";";
        }
    }
    std::cout << std::endl;
}