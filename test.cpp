#include <iostream>
using namespace std;

int main() {
  int i = 50;
  int *p;

  p = &i; 
  cout << "the address stored in p is " << p << endl;
    

  return 0;
}