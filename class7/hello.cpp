#include<iostream>
#include<string>

// g++ --std=c++11 -Wall -pedantic hello.cpp

using namespace std;

int main() {
  string msg = "Hello, world!";
  bool sayIt = true;

  if (sayIt) {
    cout << msg << endl;
  }

  return 0;
}
