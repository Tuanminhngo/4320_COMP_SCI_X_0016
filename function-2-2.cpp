#include <iostream>
#include <cmath>

int binary_to_int (int binary_digits[], int n) {
    int result =0;
    int base =2;
    int number_of_digits = n;

    for (int i=0; i < n; i++) {
        result = result + binary_digits[i] * pow(base, number_of_digits-1);
        number_of_digits--;
    }

    return result;
}