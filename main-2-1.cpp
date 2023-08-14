#include "function-2-1.cpp"

int *readNumbers() {
    int *numbers = new int[10];  // Dynamically allocate an array of int

    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];  // Read integers from input
    }

    return numbers;
}

int main() {
    int *numbersArray = readNumbers();
    hexDigits(numbersArray, 10);
    delete[] numbersArray;  // Deallocate the dynamically allocated array
    return 0;
}
