#include <iostream>
#include "Ford.h"
using namespace std;

int main() {
  Ford ford(1234, 20000);

  cout << "The badge number of the Ford car is " << ford.get_badgeNumber() << endl;
  cout << "The fuel in the Ford car is " << ford.get_litresOfFuel() << "L" << endl;

  ford.drive(100);

  cout << "The emissions of the Ford car after driving 100 km is " << ford.getEmissions() << endl;

  ford.refuel(20);

  cout << "The fuel in the Ford car after refueling is " << ford.get_litresOfFuel() << "L" << endl;

  return 0;
}


