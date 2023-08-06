#include <iostream>
#include <cmath>

extern int binary_to_int (int binary_digits[], int n);

int main() {
    int binary_number[] = {1, 0, 1, 0, 1};
    int number_of_digits = 5;
    int decimal_value = binary_to_int(binary_number, number_of_digits);
    std::cout << "Decimal value: " << decimal_value << std::endl;

    return 0;
}