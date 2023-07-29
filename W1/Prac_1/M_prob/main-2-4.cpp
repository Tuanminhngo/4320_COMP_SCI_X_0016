#include <iostream>

bool is_ascending(int array[], int n) {
    if(n<1) {
        return false;
    }
    
    for (int i=0; i<n;i++) {
        if (array[i] > array[i+1]) {
            return false;
        }
    }

    return true;
} 

int main() {
    int test_array1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(test_array1) / sizeof(test_array1[0]);

    int test_array2[] = {1, 3, 2, 4, 5, 7, 9};
    int size2 = sizeof(test_array2) / sizeof(test_array2[0]);

    if (is_ascending(test_array1, size1)) {
        std::cout << "The elements in first array are in ascending order." << std::endl;
    } else {
        std::cout << "The elements in first array are NOT in ascending order." << std::endl;
    }

    if (is_ascending(test_array2, size2)) {
        std::cout << "The elements in second array are in ascending order." << std::endl;
    } else {
        std::cout << "The elements in second array are NOT in ascending order." << std::endl;
    }

    return 0;
}