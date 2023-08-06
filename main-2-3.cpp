#include <iostream>

extern int sum_if_palindrome(int integers[], int length);

extern bool is_palindrome(int integers[], int length);

extern int sum_array_elements(int integers[], int length);


int main() {
    // Test the functions
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {1, 2, 3, 4, 5};

    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);

    int result1 = sum_if_palindrome(array1, length1);
    int result2 = sum_if_palindrome(array2, length2);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}