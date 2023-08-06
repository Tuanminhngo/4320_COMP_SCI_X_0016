#include <iostream>

extern int array_min(int integers[], int length);

extern int array_max(int integers[], int length);

extern int sum_min_max(int integers[], int length);

int main() {
    int array[] = {1, 2, 3, 4, 5};

    std::cout << "Sum of min and max: " << sum_min_max(array, 5) << std::endl;

    return 0;
}