#include <iostream>
#include "Person.h"

using namespace std;



extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
  int n;
  cin >> n;

  PersonList initialList;
  initialList.numPeople = n;
  initialList.people = new Person[n];

  for (int i = 0; i < n; i++) {
    initialList.people[i].name = "Jane Doe";
    initialList.people[i].age = 1;
  }

  PersonList copiedList = shallowCopyPersonList(initialList);

  for (int i = 0; i < n; i++) {
    cout << "Person " << i << ": " << copiedList.people[i].name
         << " age: " << copiedList.people[i].age << " year old\n";
  }

  return 0;
}
