#include<iostream>

void myFunc(int & parm) {
  parm = parm * 2;
}

void display(int x, int y, int & ref) {
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "ref = " << ref << std::endl;
}

int main() {
  int x = 10;
  int y = x;
  int &ref = x;  // reference variable
  // int &ref2;  // references must be initialized!

  // Print the variables
  display(x,y,ref);

  std::cout << std::endl << "Setting x = 20" << std::endl;
  x = 20;
  display(x,y,ref);

  std::cout << std::endl << "Setting ref = 30" << std::endl;
  ref = 30;
  display(x,y,ref);

  std::cout << std::endl << "Calling myFunc(x)" << std::endl;
  myFunc(x);
  display(x,y,ref);

  std::cout << std::endl << "Calling myFunc(ref)" << std::endl;
  myFunc(ref);
  display(x,y,ref);

  std::cout << std::endl << "Setting ref = y" << std::endl;
  ref = y;
  display(x,y,ref);
 
  std::cout << std::endl << "Calling myFunc(ref)" << std::endl;
  myFunc(ref);
  display(x,y,ref);

  return 0;
}
  

