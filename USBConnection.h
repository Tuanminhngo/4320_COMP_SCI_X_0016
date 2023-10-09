#include <stack>
#include <iostream>

using namespace std;

class USBConnection{
private:
  USBConnection(int id) : id_(id){}
  ~USBConnection() { ids_.push(id_);}

  int id_;
public:
  static USBConnection* create(){
    if (ids_.empty()){
      return nullptr;
    }

    int id = ids_.top();
    ids_.pop();

    return new USBConnection(id);
  }

  static stack<int> ids_;
};

