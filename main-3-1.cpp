#include "function-3-1.cpp"

int *readNumbers() {
    int *numbers = new int[10];  // Dynamically allocate an array of int

    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];  // Read integers from input
    }

    return numbers;
}

int main() {
    int *numbersArray1 = readNumbers();
    int *numbersArray2 = readNumbers();

    bool areEqual = equalsArray(numbersArray1, numbersArray2, 10);
    std::cout << "Arrays are " << (areEqual ? "equal" : "not equal") << std::endl;

    delete[] numbersArray1;  // Deallocate the dynamically allocated arrays
    delete[] numbersArray2;

    return 0;
}
