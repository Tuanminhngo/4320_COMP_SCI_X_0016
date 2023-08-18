#include <iostream>

#include "Person.h"

PersonList SCPersonList(PersonList pl) {
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;
    newPersonList.people = pl.people;  // Shallow copy

    return newPersonList;
}