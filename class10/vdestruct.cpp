#include<iostream>

using namespace std;

class MyBase {
  public:
    MyBase() { cout << "  MyBase Constructor " << endl; }
    virtual ~MyBase() { cout << "  MyBase Destructor " << endl; }
};

class MyClass : public MyBase {
  private:
    int * a;
  public:
    MyClass(int x=0) { 
      a = new int;
      *a = x;
      cout << "  MyClass Constructor: " << *a << endl;
    }
    ~MyClass() { 
      cout << "  MyClass Destructor: " << *a << endl; 
      delete(a);
    }
};

int main() {
  cout <<"MAIN: start" << endl;
  cout <<"MAIN: declare c1 - start" << endl;
  MyClass c1(1);
  cout <<"MAIN: declare c1 - done" << endl;

  cout <<"MAIN: declare c2 (MyBase *) - start" << endl;
  MyBase * c2;
  cout <<"MAIN: declare c2 (MyBase *) - done" << endl;

  cout <<"MAIN: allocate c2 (MyClass) - start" << endl;
  c2 = new MyClass(2);
  cout <<"MAIN: allocate c2 (MyClass) - done" << endl;

  cout <<"MAIN: call c2 destructor - start" << endl;
  delete(c2);
  cout <<"MAIN: call c2 destructor - done" << endl;

  cout <<"MAIN: end" << endl;
  return 0;
}

