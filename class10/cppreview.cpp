#include<iostream>

class MyClass {
  private:
    int a;
  public:
    MyClass(int num = 0) {
      a = num;
    }
    void display();
};

void MyClass::display() {
  // scope resolution operator
  std::cout << "a = " << a << std::endl;
}

void display() {
  // scope resolution operator
  std::cout << "Here is some output." << std::endl;
}

int main () {
  MyClass thing(10);
  // How does it know which method to call?
  display();         // Global display method
  thing.display();   // MyClass display method
  return 0;
}
