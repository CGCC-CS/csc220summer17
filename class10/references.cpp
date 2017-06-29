#include<iostream>

void myfunc (int & parm) {
  parm = parm * 2;
}

int main() {
  int x = 10;
  int y = x;
  int &ref = x;
  // int &ref2;  // Not allowed

  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "ref = " << ref << std::endl;
  
  std::cout << std::endl << "Setting x = 20" << std::endl;
  x = 20;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "ref = " << ref << std::endl;

  std::cout << std::endl << "Setting ref = 30" << std::endl;
  ref = 30;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "ref = " << ref << std::endl;

  std::cout << std::endl << "Calling myfunc(x)" << std::endl;
  myfunc(x);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "ref = " << ref << std::endl;

  std::cout << std::endl << "Calling myfunc(ref)" << std::endl;
  myfunc(ref);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "ref = " << ref << std::endl;

  std::cout << std::endl << "Setting ref = y" << std::endl;
  ref = y;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "ref = " << ref << std::endl;

  std::cout << std::endl << "Calling myfunc(ref)" << std::endl;
  myfunc(ref);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "ref = " << ref << std::endl;

  return 0;
}
