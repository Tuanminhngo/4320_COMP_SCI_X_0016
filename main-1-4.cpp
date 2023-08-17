#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    PersonList personList;
    personList.numPeople = n;
    personList.people = new Person[n];

    for (int i = 0; i < n; i++) {
        personList.people[i].name = "Jane Doe";
        personList.people[i].age = 1;
    }

    return personList;
}

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;
    newPersonList.people = pl.people;  // Shallow copy

    return newPersonList;
}

int main() {
    int n;
    std::cout << "Enter the number of persons: ";
    std::cin >> n;

    PersonList originalList = createPersonList(n);

    PersonList shallowCopiedList = shallowCopyPersonList(originalList);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << std::endl;
    }

    std::cout << "Shallow Copied List:" << std::endl;
    for (int i = 0; i < shallowCopiedList.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << shallowCopiedList.people[i].name << ", Age = " << shallowCopiedList.people[i].age << std::endl;
    }

    // Note that deleting originalList.people would also affect shallowCopiedList.people
    delete[] originalList.people; // Deallocate the dynamically allocated array

    return 0;
}
