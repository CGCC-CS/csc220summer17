#include<iostream>

using namespace std;

class StaffMember {
  private:
    string name;
    string address;
    string phone;

  public:
    // constructor
    StaffMember(string n, string a, string p) {
       name = n;
       address = a;
       phone = p; 
    }
    void print ();
};

// :: is the Scope Resolution Operator
void StaffMember::print() {
  cout << "     Name: " << name << endl;
  cout << "  Address: " << address << endl;
  cout << "    Phone: " << phone << endl;
}


int main() {
  StaffMember emp1("Alice Jenkins", "456 4th", "480-555-4321"); 
  StaffMember * emp2 = new StaffMember("Bob Smith", "123 Bank", "480-555-1234"); 

  cout << "Employee 1: " << endl;
  emp1.print();
  cout << "Employee 2: " << endl;
  emp2->print();
  cout << "Done! " << endl;

  return 0;
}
