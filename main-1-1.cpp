#include <iostream>
#include "Person.h"

Person* createPersonArray(int n) {
    Person* persons = new Person[n];

    for (int i = 0; i < n; i++) {
        persons[i].name = "John Doe";
        persons[i].age = 0;
    }

    return persons;
}

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    Person* personArray = createPersonArray(n);

    // Print the array
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << personArray[i].name << ", Age = " << personArray[i].age << std::endl;
    }

    delete[] personArray; // Deallocate the dynamically allocated array

    return 0;
}
