#include <iostream>

int array_min(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int min = integers[0];
    for (int i = 1; i < length; i++) {
        if (integers[i] < min) {
            min = integers[i];
        }
    }

    return min;
}

int array_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int max = integers[0];
    for (int i = 1; i < length; i++) {
        if (integers[i] > max) {
            max = integers[i];
        }
    }

    return max;
}

int sum_min_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int min_value = array_min(integers, length);
    int max_value = array_max(integers, length);
    int sum = min_value + max_value;

    return sum;
}