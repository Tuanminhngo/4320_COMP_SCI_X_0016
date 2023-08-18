#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    PersonList list = createPersonList(n);

    // Print the list
    for (int i = 0; i < list.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << list.people[i].name << ", Age = " << list.people[i].age << std::endl;
    }

    delete[] list.people; // Deallocate the dynamically allocated array

    return 0;
}