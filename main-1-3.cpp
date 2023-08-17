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

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;
    newPersonList.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; i++) {
        newPersonList.people[i].name = pl.people[i].name;
        newPersonList.people[i].age = pl.people[i].age;
    }

    return newPersonList;
}

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
