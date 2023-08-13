#include <iostream>

int *readNumbers() {
    int *numbers = new int[10];  // Dynamically allocate an array of int

    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];  // Read integers from input
    }

    return numbers;
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}