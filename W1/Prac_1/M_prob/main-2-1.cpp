#include <iostream>

int min_element(int array[], int n) {
    if(n<1) {
        return 0;
    }
    int min = array[0];
    for (int i=0; i<n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int test_array[] = {10, 5, 8, 3, 12, 6};
    int size = sizeof(test_array) / sizeof(test_array[0]);

    int minNumber = min_element(test_array, size);
    std::cout << "The minimum number in the array is: " << minNumber << std::endl;

    return 0;
}