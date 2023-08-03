#include <iostream>

int sum_two_arrays (int array[], int second_array[], int n) {
    if (n<1) {
        return 0;
    }

    int sum =0;

    for (int i=0; i<n; i++) {
        sum+=array[i] +second_array[i];
    }
    return sum;
}

int main() {
    int test_firstArray[] = {4,6,8,3,4,-6};
    int test_secondArray[] = {0,12,77,2,4,-9};
    int size = sizeof(test_firstArray) / sizeof(test_firstArray[0]);

    int sumTwoArrays = sum_two_arrays(test_firstArray, test_secondArray, size);
    std::cout <<"The sum of two arrays is " << sumTwoArrays << std::endl;

    return 0;
}