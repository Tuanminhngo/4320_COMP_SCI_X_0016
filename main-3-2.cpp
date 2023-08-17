#include <iostream>
#include "function-3-1.h"
#include "function-3-2.h"

int *readNumbers() {
    int *numbers = new int[10];  // Dynamically allocate an array of int

    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];  // Read integers from input
    }

    return numbers;
}

int main() {
    int *numbersArray1 = readNumbers();

    int *reversedArray = reverseArray(numbersArray1, 10);

    bool areEqual = equalsArray(numbersArray1, reversedArray, 10);
    std::cout << "Arrays are " << (areEqual ? "equal" : "not equal") << std::endl;

    delete[] numbersArray1;  // Deallocate the dynamically allocated arrays
    delete[] reversedArray;

    return 0;
}
