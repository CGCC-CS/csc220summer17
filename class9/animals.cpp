#include<iostream>

using namespace std;

class Animal {
  protected:
    string id;

  public:
    Animal(string s="Generic Animal") {  
      id = s;
    }

    // Pure virtual method - must be overridded by any non-abstract
    //   derrived class.
    virtual void speak() = 0;

    // Virtual method - can be overridden by a derrived class.  The 
    //   type of the object being pointed to determines the method
    //   that gets called.
    virtual void move() {
      cout << id << ": I'm moving like an animal!" << endl;
    } 

    // Non-virtual method - can be overridden by a derrived class. The
    //   type of the pointer determines the method that gets called.
    void name() {
      cout << id << ": Animal!" << endl;
    } 
};

class Dog : public Animal {
  public:
    Dog(string s="BADDOG") : Animal(s) {}  // Call animal constructor

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
    Cat(string s="BADCAT") : Animal(s) {}  // Call animal constructor

    void speak() {
      cout << id << ": Meow!" << endl;
    } 

    void name() {
      cout << id << ": Snowflake" << endl;
    } 
};

int main() {
  //Animal animalVar;
  Animal *animalPtr;
  Animal *pets[2];

  Dog dogVar("Mutt");
  Dog *dogPtr;
  Dog & dogRef = dogVar;
  Animal & animalRef = dogVar;

  Cat catVar;
  Cat *catPtr;
  Cat & catRef = catVar;

  /* Can't instantiate an Animal object */
  /*
  cout << endl << "Animal object " << endl;
  animalVar.speak();
  animalVar.move();
  animalVar.name();

  cout << endl << "Animal pointer to Animal object" << endl;
  animalPtr = new Animal("Aniptr");
  animalPtr->speak();
  animalPtr->move();
  animalPtr->name();
  */

  cout << endl << "Dog object " << endl;
  dogVar.speak();
  dogVar.move();
  dogVar.name();

  cout << endl << "Dog pointer to Dog object" << endl;
  dogPtr = new Dog("Rescue Pup");
  dogPtr->speak();
  dogPtr->move();
  dogPtr->name();

  cout << endl << "Dog reference " << endl;
  dogRef.speak();
  dogRef.move();
  dogRef.name();

  cout << endl << "Animal pointer to Dog object" << endl;
  animalPtr = &dogVar;
  animalPtr->speak();
  animalPtr->move();
  animalPtr->name();

  cout << endl << "Animal reference to Dog object" << endl;
  animalRef.speak();
  animalRef.move();
  animalRef.name();

  cout << endl << "Cat object " << endl;
  catVar.speak();
  catVar.move();
  catVar.name();

  cout << endl << "Cat pointer to Cat object" << endl;
  catPtr = new Cat("Rescue Cat");
  catPtr->speak();
  catPtr->move();
  catPtr->name();

  cout << endl << "Cat reference " << endl;
  catRef.speak();
  catRef.move();
  catRef.name();

  cout << endl << "Animal pointer to Cat object" << endl;
  animalPtr = &catVar;
  animalPtr->speak();
  animalPtr->move();
  animalPtr->name();

  cout << endl << "Array of Animal pointers" << endl;
  pets[0] = &dogVar;
  pets[1] = catPtr;
  for(int ii=0;ii<2;ii++) {
    pets[ii]->speak();
    pets[ii]->name();
  }
  
  return 0;
}
