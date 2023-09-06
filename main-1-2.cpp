#include <iostream>

#include "Musician.h"
#include "Orchestra.h"

using namespace std;

int main() {
  // create an empty orchestra
  Orchestra orchestra(5);
  // create some musicians
  Musician m1("violin", 5);
  Musician m2("viola", 3);
  Musician m3("cello", 7);
  Musician m4("double bass", 2);
  Musician m5("flute", 4);
  Musician m6("trumpet", 6);
  // add musicians to the orchestra
  if (orchestra.add_musician(m1)) {
    cout << "Added musician 1 to the orchestra" << endl;
  } else {
    cout << "Could not add musician 1 to the orchestra" << endl;
  }
  if (orchestra.add_musician(m2)) {
    cout << "Added musician 2 to the orchestra" << endl;
  } else {
    cout << "Could not add musician 2 to the orchestra" << endl;
  }
  if (orchestra.add_musician(m3)) {
    cout << "Added musician 3 to the orchestra" << endl;
  } else {
    cout << "Could not add musician 3 to the orchestra" << endl;
  }
  if (orchestra.add_musician(m4)) {
    cout << "Added musician 4 to the orchestra" << endl;
  } else {
    cout << "Could not add musician 4 to the orchestra" << endl;
  }
  if (orchestra.add_musician(m5)) {
    cout << "Added musician 5 to the orchestra" << endl;
  } else {
    cout << "Could not add musician 5 to the orchestra" << endl;
  }
  if (orchestra.add_musician(m6)) {
    cout << "Added musician 6 to the orchestra" << endl;
  } else {
    cout << "Could not add musician 6 to the orchestra" << endl;
  }
  // print the number of musicians in the orchestra
  cout << "The orchestra currently has "
            << orchestra.get_current_number_of_members() << " members"
            << endl;
  // check if orchestra has a specific instrument
  if (orchestra.has_instrument("violin")) {
    cout << "The orchestra has a violinist" << endl;
  } else {
    cout << "The orchestra does not have a violinist" << endl;
  }
  // get the list of musicians in the orchestra
  Musician *members = orchestra.get_members();
  // print the details of each musician
  for (int i = 0; i < orchestra.get_current_number_of_members(); i++) {
    cout << "Musician " << i + 1 << " plays " << members[i].get_instrument() << " and has " << members[i].get_experience() << " years of experience" << endl;
  }
  return 0;
}