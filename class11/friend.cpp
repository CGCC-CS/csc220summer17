#include<iostream>

using namespace std;

class MyClass {
  private:
    int a;
  public:
  MyClass(int x=0) {
    a = x;
  }
  void print() {
    cout << "  Printing: " << a << endl;
  }
  // Friend methods can see private members
  friend ostream& operator<< (ostream &strm, const MyClass &m);
};

// ------ end of MyClass ---------

ostream& operator<< (ostream &strm, const MyClass &m) {
  strm << "[" << m.a << "]";
  return strm;
}

int main() {
  MyClass c1(1);

  c1.print();

  cout << "c1 = " << c1 << endl;

  return 0;
}

