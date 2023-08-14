#include <iostream>
#include <iomanip>  // For hex output formatting

void hexDigits(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << " " << std::uppercase << std::hex << numbers[i] << std::endl;
    }
}

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

bool equalsArray(int *numbers1, int *numbers2, int length) {
    if (length < 1) {
        return false;  // Arrays with length less than 1 cannot be equal
    }

    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;  // If any numbers are different, arrays are not equal
        }
    }

    return true;  // All numbers are equal
}