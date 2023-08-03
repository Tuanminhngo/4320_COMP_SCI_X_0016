#include <iostream>

bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }
    for (int i = 0; i < n; i++) {
        if (array[i] != array[n - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int test_fanArray1[] = {1, 2, 3, 2, 1};
    int size1 = sizeof(test_fanArray1) / sizeof(test_fanArray1[0]);

    int test_fanArray2[] = {2, 4, 4, 2};
    int size2 = sizeof(test_fanArray2) / sizeof(test_fanArray2[0]);

    int test_nonFanArray1[] = {1, 2, 1, 2, 1};
    int size3 = sizeof(test_nonFanArray1) / sizeof(test_nonFanArray1[0]);

    int test_nonFanArray2[] = {1, 3, 5, 4, 2};
    int size4 = sizeof(test_nonFanArray2) / sizeof(test_nonFanArray2[0]);

    std::cout << "fanArray1 is " << (is_fanarray(test_fanArray1, size1) ? "a fan array." : "NOT a fan array.") << std::endl;
    std::cout << "fanArray2 is " << (is_fanarray(test_fanArray2, size2) ? "a fan array." : "NOT a fan array.") << std::endl;
    std::cout << "nonFanArray1 is " << (is_fanarray(test_nonFanArray1, size3) ? "a fan array." : "NOT a fan array.") << std::endl;
    std::cout << "nonFanArray2 is " << (is_fanarray(test_nonFanArray2, size4) ? "a fan array." : "NOT a fan array.") << std::endl;
}
