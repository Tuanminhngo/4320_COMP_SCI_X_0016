#include <iostream>

int array_sum(int array[], int n) {
    int sum =0;
    if(n<1) {
        return 0;
    }
    for(int i=0; i<n; i++) {
        sum+=array[i];
    }
    return sum;
}

int main() {
    int test_array[] = {3,-8,9,4,5};
    int size = sizeof(test_array) / sizeof(test_array[0]);

    int sumArray = array_sum(test_array, size);

    std::cout << "The sum of the given array is: " << sumArray << std::endl;
    return 0; 
}