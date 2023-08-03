#include <iostream>

int sumEvenPositions(int array[], int n) {
    if (n < 1) {
        return 0; // Return 0 if the size parameter is less than 1
    }

    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += array[i];
    }

    return sum;
}