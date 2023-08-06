#include <iostream>
#include <cstring>

void count_digits(int array[4][4]) {
    int digit_counts[10] = {0}; // Initialize an array to store the counts for each digit (0-9)

    // Count the occurrences of each digit in the matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int digit = array[i][j];
            digit_counts[digit]++;
        }
    }

    // Print the results in the specified format
    for (int i = 0; i < 10; i++) {
        std::cout << i << ":" << digit_counts[i] << ";";
    }
}