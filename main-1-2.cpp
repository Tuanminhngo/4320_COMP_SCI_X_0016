#include <iostream>

double array_mean (int array[], int n) {
    if(n<1) {
        return 0;
    }

    double mean = 0;
    int sum = 0;
    for (int i =0; i<n; i++) {
        sum+=array[i];
    }
    mean = sum/n;
    return mean;
}

int main() {
    int test_array[5] = {3,-8,9,4,5};
    int size = sizeof(test_array) / sizeof(test_array[0]);

    int meanArray = array_mean(test_array, size);
    
    std::cout << "The mean of given array is: " << meanArray << std::endl;
    return 0; 