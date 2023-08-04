#include <iostream>
#include <limits> // For numeric_limits

// Function to find the maximum element in the array
int findMax(int arr[], int length) {
    if (length <= 0) {
        return -1;
    }

    int max = std::numeric_limits<int>::min(); // Set max to the smallest possible integer

    for (int i = 0; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

// Function to find the minimum element in the array
int findMin(int arr[], int length) {
    if (length <= 0) {
        return -1;
    }

    int min = std::numeric_limits<int>::max(); // Set min to the largest possible integer

    for (int i = 0; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

// Function to find the sum of maximum and minimum elements in the array
int sumMaxMin(int arr[], int length) {
    int max = findMax(arr, length);
    int min = findMin(arr, length);

    if (max == -1 || min == -1) {
        return -1;
    }

    return max + min;
}