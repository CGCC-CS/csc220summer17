#include<iostream>

using namespace std;

class Animal {
  protected:
    string id;
  public:
    Animal(string s="NULL") {
      id = s;
    }
    void speak() {
      cout << id << ": Hello, I'm an animal!" << endl;
    }
    virtual void move() {
      cout << id << ": I'm moving like an animal." << endl;
    }
    virtual void name() = 0;
};

class Dog : public Animal {
  public:
    Dog(string s="BADDOG") : Animal(s) {}  // call Animal constructor
    void speak() {
      cout << id << ": Woof!" << endl;
    }
    void move() {
      cout << id << ": Run around." << endl;
    }
    void name() {
      cout << id << ": Rover" << endl;
    }
};

class Cat : public Animal {
  public:
    Cat(string s="BADCAT") : Animal(s) {}  // call Animal constructor
    void speak() {
      cout << id << ": Meow!" << endl;
    }
    void name() {
      cout << id << ": Kitty" << endl;
    }
};

int main () {
//  Animal a1;
  Animal *a2;
  Dog d1("d1"), *d2;
  Cat c1("c1"), *c2;
  Animal *pets[2];

// Cannot instantiate an abstract class
//  cout << "Animal object" << endl;
//  a1.speak();
//  a1.move();
//  a1.name();
  
// Cannot instantiate an abstract class
//  cout << endl << "Animal pointer to Animal object" << endl;
//  a2 = new Animal("a2");
//  a2->speak();
//  a2->move();
//  a2->name();
  
  cout << endl << "Dog object" << endl;
  d1.speak();
  d1.move();
  d1.name();
  
  cout << endl << "Dog pointer to Dog object" << endl;
  d2 = new Dog("d2");
  d2->speak();
  d2->move();
  d2->name();

  cout << endl << "Animal pointer to Dog object" << endl;
  a2 = d2;
  a2->speak();
  a2->move();
  a2->name();
  
  cout << endl << "Cat object" << endl;
  c1.speak();
  c1.move();
  c1.name();
  
  cout << endl << "Cat pointer to Cat object" << endl;
  c2 = new Cat("c2");
  c2->speak();
  c2->move();
  c2->name();

  cout << endl << "Animal pointer to Cat object" << endl;
  a2 = c2;
  a2->speak();
  a2->move();
  a2->name();

  cout << endl << "Array of Animal pointers" << endl;
  pets[0] = d2; 
  pets[1] = c2; 
  for(int ii=0;ii<2;ii++) 
    pets[ii]->name(); 
   
}
