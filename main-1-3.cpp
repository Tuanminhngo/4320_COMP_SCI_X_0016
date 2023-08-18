#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

extern PersonList deepCopyPersonList(PersonList p1);

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    PersonList originalList = createPersonList(n);

    PersonList copiedList = deepCopyPersonList(originalList);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << std::endl;
    }

    std::cout << "Copied List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << std::endl;
    }

    delete[] originalList.people; // Deallocate the dynamically allocated array
    delete[] copiedList.people;

    return 0;
}
