#include <iostream>

void two_five_nine (int array[], int n) {
    if (n<1) {
        return;
    }
    int num_two = 0;
    int num_five = 0;
    int num_nine = 0;

    for (int i=0; i<n; i++) {
        switch (array[i]) {
            case 2:
            num_two++;
            break;
            case 5:
            num_five++;
            break;
            case 9:
            num_nine++;
            break;
            default:
            break;
        }
    }

    std::cout << "2:" << num_two << ";5:" << num_five << ";9:" << num_nine << ";" << std::endl;
}

int main() {
    int test_array[] = {2, 5, 9, 9, 2, 9, 5, 9, 2, 9, 9, 9, 9, 5};
    int size = sizeof(test_array) / sizeof(test_array[0]);

    two_five_nine(test_array, size);

    return 0; 
}