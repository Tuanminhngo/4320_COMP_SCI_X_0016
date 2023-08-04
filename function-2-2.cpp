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