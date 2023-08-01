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