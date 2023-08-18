#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
  int n;
  cin >> n;

  PersonList firstList;
  firstList.numPeople = n;
  firstList.people = new Person[n];

  for (int i = 0; i < n; i++) {
    firstList.people[i].name = "Jane Doe";
    firstList.people[i].age = 1;
  }

  PersonList copiedList = shallowCopyPersonList(firstList);

  for (int i = 0; i < n; i++) {
    cout << "Person " << i << ": " << copiedList.people[i].name
         << " age: " << copiedList.people[i].age << " year old\n";
  }

  return 0;
}
