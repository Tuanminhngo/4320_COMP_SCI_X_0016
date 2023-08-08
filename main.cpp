#include <iostream>
#include <cstdlib>
#include <ctime>  
#include "workshop.h"
using namespace std;

int main() {
    double number = 5.6;

    cout << "Original value: " << number << endl;

    changeValue(&number);

    cout << number << endl;
    
    double array[] = {3.1,4.2,5.4};

    printArray(array, 3);

    double findingMax[] = {3.7, 8.9, 1.0};

    int size = sizeof(findingMax)/sizeof(findingMax[0]);

    double max = arrayMax(findingMax, size);

    cout << max << endl;

    int dynamic_array_size = 5;
    double value_M = 4.67;

    double* dynamic_array = dynamicArray(dynamic_array_size, value_M);

    printArray(dynamic_array, dynamic_array_size);

    delete[] dynamic_array;

    return 0;
}



