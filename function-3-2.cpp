#include <iostream>
int getMedian(int array[], int n) {
    // Check if the size is odd and greater than or equal to 1
    if (n % 2 == 1 && n >= 1) {
        // Sort the array in ascending order
        std::sort(array, array + n);

        // Return the middle element as the median
        return array[n / 2];
    }

    // Return 0 if the size is even or less than 1
    return 0;
}

