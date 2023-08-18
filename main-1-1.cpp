#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    Person* personArray = createPersonArray(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << personArray[i].name << ", Age = " << personArray[i].age << std::endl;
    }

    delete[] personArray; 

    return 0;
}
