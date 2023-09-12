#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>
#include <string>

using namespace std;

class University{
  private:
    string name;
    string location;

  public:
    void addCourse(int id, string name);

    
};

#endif