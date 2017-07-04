#include<iostream>

using namespace std;

class myClass {
  public:
    int * a;
  myClass(int x=0) {
    a = new int;      // Allocate memory for a
    *a = x;           // Put value of x in new memory
    cout << "  Constructor: " << *a << "  (" << a << ")" << endl;
  }
  myClass(const myClass & original) {
    a = new int;         // Allocate new memory for a
    *a = *(original.a);  // Copy value pointed to by original a
    cout << "  Copy Constructor: " << *a << "  (" << a << ")" << endl;
  }
  ~myClass() {
    cout << "  Destructor: " << *a << endl;
    delete (a);       // use delete[](name) to delete arrays 
    a=nullptr;
  }
};

//void func(myClass k) {
void func(myClass *k) {
  cout << "+++++++++++++++++++++++++++++" << endl;
  cout << " FUNC: entering func" << endl;
  cout << " FUNC: allocating c3" << endl;
  myClass c3(3);
  myClass * c13 = new myClass(13);
  cout << " FUNC: allocated c3" << endl;
  cout << " FUNC: myClass " << *k->a << endl;
  delete(c13);  // Must do this or else memory leak!
  cout << " FUNC: exiting " << endl;
  cout << "+++++++++++++++++++++++++++++" << endl;
}

//void funcy(myClass m) {
void funcy(myClass m) {
  cout << "-----------------------------" << endl;
  cout << " FUNCY: entering funcy" << endl;
  cout << " FUNCY: allocating c4" << endl;
  myClass c4(4);
  cout << " FUNCY: allocated c4" << endl;
  cout << " FUNCY: myClass " << *m.a << "  (" << m.a << ")" << endl;
  cout << " FUNCY: exiting " << endl;
  cout << "-----------------------------" << endl;
}

int main() {
  cout << "MAIN: start" << endl;
  cout << "MAIN: start declare c1" << endl;
  myClass c1(1);
  cout << "MAIN: done declare c1" << endl;

  cout << "MAIN: start declare *c2" << endl;
  myClass * c2;
  cout << "MAIN: done declaring *c2" << endl;
  cout << "MAIN: allocate *c2" << endl;
  c2 = new myClass(2);
  cout << "MAIN: done allocating *c2" << endl;

  cout << "MAIN: calling func(c1)" << endl;
  func(&c1);
  cout << "MAIN: returned from func(c1)" << endl;

  cout << "MAIN: calling funcy(c1)" << endl;
  funcy(c1);
  cout << "MAIN: returned from funcy(c1)" << endl;

  cout << "MAIN: delete *c2" << endl;
  delete c2;
  cout << "MAIN: end" << endl;
  return 0;
}

