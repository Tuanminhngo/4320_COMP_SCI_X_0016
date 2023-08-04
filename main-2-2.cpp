#include <iostream>

int binaryToInt(int arr[], int size) {
    if (size <= 0 || size > 30) {
      return -1;
    }

    int result = 0;
    int power = 1;

    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == 1) {
            result += power;
        }
        power *= 2;
    }

    return result;
}

int main() {
    int binaryArray[] = {1, 0, 1, 0}; 
    int size = sizeof(binaryArray) / sizeof(binaryArray[0]);

    int intValue = binaryToInt(binaryArray, size);
    if (intValue == -1) {
        std::cout << "Invalid array size. Size should be between 1 and 30." << std::endl;
    } else {
        std::cout << "Integer value of the binary number: " << intValue << std::endl;
    }

    return 0;
}
