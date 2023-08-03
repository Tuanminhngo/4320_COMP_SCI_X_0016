#include <iostream>
void two_five_nine (int array[], int n) {
    if (n < 1) {
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