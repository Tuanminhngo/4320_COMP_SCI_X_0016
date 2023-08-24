#include <iostream>
#include <string>

using namespace std;

struct Student {
  string name;
  int ID;
  double grade;

  void print() { 
    cout << name << "|"
          << ID << "|" 
          << grade << endl; }
};

void print_student(Student a) {
  cout << a.name << "|" << a.ID << "|" << a.grade << endl;
}

void print_student_ptr(Student *p) {
  cout << p->name << "|" << p->ID << "|" << p->grade << endl;
}

int main() {
  Student s1;
  Student s2;

  Student *ps;

  s1.name = "Feras";
  s1.ID = 65974;
  s1.grade = 85.55;

  s2.name = "Adam";
  s2.ID = 6974;
  s2.grade = 50.55;

  ps = &s1;

  print_student(*ps);

  s2.print();

  return 0;
}