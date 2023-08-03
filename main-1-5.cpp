#include <iostream>

int count_evens (int number) {
    if(number < 1) {
        return 0;
    }
    
    int count =0;

    for (int i=1; i<number; i++) {
        if (i % 2 ==0) {
            count++;
        }
    }
    return count;
}

int main() {
    int number = 10;

    int evenCount = count_evens(number);
    std::cout << "Number of even numbers between 1 and " << number << " (inclusive): " << evenCount << std::endl;
}