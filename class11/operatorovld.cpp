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
  
    MyClass operator+ (const MyClass& that);
    int operator+ (const int x);

    // Friend methods can see private members
    friend ostream& operator<< (ostream& strm, const MyClass& m);
    friend MyClass operator+ (int x, const MyClass& that);
};

MyClass MyClass::operator+ (const MyClass& that) {
  MyClass ret(this->a + that.a);
  return ret;
}

int MyClass::operator+ (const int x) {
  int ret = this->a + x;
  return ret;
}

// ------------ End of MyClass ------------ 

ostream& operator<< (ostream& strm, const MyClass& m) {
  strm << "[" << m.a << "]";
  return strm;
}

MyClass operator+ (int x, const MyClass& that) {
  MyClass ret(that.a + x);
  return ret;
}

int main() {
  MyClass c1(1);
  MyClass c2(2);
  MyClass result;

  c1.print();
  c2.print();

//  cout << "c1 + c2 = " << c1.a << " + " << c2.a << " = " << c1.a+c2.a << endl;
  cout << "c1 + c2 = " << c1 << " + " << c2 << " = " << c1 + c2 << endl;
  cout << "c1 + c2 = " << c1 << " + " << c2 << " = " << c1.operator+(c2) << endl;
  cout << "c1 + 20 = " << c1 << " + " << 20 << " = " << c1 + 20 << endl;
  cout << "20 + c2 = " << 20 << " + " << c2 << " = " << 20 + c2 << endl;

  return 0;
}
