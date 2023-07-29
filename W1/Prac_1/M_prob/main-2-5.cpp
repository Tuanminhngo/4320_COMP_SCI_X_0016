#include <iostream>

bool is_descending(int array[], int n) {
    if(n <= 0) {
        return false;
    }
    
    for (int i=0; i<n;i++) {
        if (array[i] < array[i+1]) {
            return false;
        }
    }

    return true; 
}

int main() {
    int test_array1[] = {1, 2, 3, 4, 5, 3, 1};
    int size1 = sizeof(test_array1) / sizeof(test_array1[0]);

    int test_array2[] = {5, 4, 3, 2, 1};
    int size2 = sizeof(test_array2) / sizeof(test_array2[0]);

    if (is_descending(test_array1, size1)) {
        std::cout << "The elements in first array are in descending order." << std::endl;
    } else {
        std::cout << "The elements in first array are NOT in descending order." << std::endl;
    }

    if (is_descending(test_array2, size2)) {
        std::cout << "The elements in second array are in descending order." << std::endl;
    } else {
        std::cout << "The elements in second array are NOT in descending order." << std::endl;
    }

    return 0;
}