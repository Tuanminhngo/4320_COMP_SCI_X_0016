#include <iostream>
#include <cmath>

int binaryArrayToInt(int binaryArray[], int size) {
    if (size < 1 || size > 30) {
        std::cout << "Invalid array size" << std::endl;
        return -1;  // Return an error value
    }

    int intValue = 0;
    for (int i = 0; i < size; i++) {
        if (binaryArray[i] != 0 && binaryArray[i] != 1) {
            std::cout << "Invalid binary value at index " << i << std::endl;
            return -1;  // Return an error value
        }
        intValue += binaryArray[i] * pow(2, size - i - 1);
    }

    return intValue;
}

int main() {
    int binaryArr[] = {1, 0, 1, 1};  // Binary representation: 1011
    int size = sizeof(binaryArr) / sizeof(binaryArr[0]);

    int intValue = binaryArrayToInt(binaryArr, size);

    if (intValue != -1) {
        std::cout << "Binary array as integer: " << intValue << std::endl;
    }

    return 0;
}
