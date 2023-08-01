#include <iostream>

int max_element (int array[], int n) {
    if(n<1) {
        return 0;
    }
    int max = array[0];
    for (int i=1; i<n; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int test_array[] = {7,2,9,0,-19,22};
    int size = sizeof(test_array) / sizeof(test_array[0]);

    int maxNumber = max_element(test_array, size);
    std::cout << "The maximum number in the array is: " << maxNumber << std::endl;

    return 0;
}