#include <iostream>
#include <cstdlib>
using namespace std;

void changeValue(double* ptr) {
    *ptr = 42.0;
}

void printArray(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

double arrayMax(double* arr, int size) {
    if (size <= 0) {
        return -1.0;  // Invalid input
    }

    double maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

double* dynamicArray(int N, double M) {
    if (N <= 0) {
        return nullptr;  // Invalid input
    }

    double* arr = new double[N];
    for (int i = 0; i < N; i++) {
        // Initialize array with the specified value M
        arr[i] = M;
    }

    return arr;
}