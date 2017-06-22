#include<iostream>

using namespace std;

#define STAFF_SIZE  4

// Staff member - base class
class StaffMember {
  private:
    string name;
    string address;
    string phone;
  
  public: 
    // Constructor
    StaffMember(string n, string a, string p) {
      name = n;
      address = a;
      phone = p;
    }
    void print();
    virtual int pay() = 0;  // Abstract method
};

void StaffMember::print() {
  cout << "   Name: " << name << endl;
  cout << "Address: " << address << endl;
  cout << "  Phone: " << phone << endl;
}

// Volunteer class
class Volunteer : public StaffMember{
  public :
    Volunteer(string n, string a, string p) : 
       StaffMember(n, a, p)
    {
    }
  int pay () { return 0; }
};

// Employee class
class Employee : public StaffMember{
  private:
    string ssn;
  protected:
    int payrate;
  public :
    Employee(string n, string a, string p, 
              string s, int r) :
       StaffMember(n, a, p)
    {
       ssn = s;
       payrate = r;
    }
  void print();
};

void Employee::print() {
  StaffMember::print();
  cout << "    SSN: " << ssn << endl;
  cout << "Pay rate: " << payrate << endl;
}

class Salaried : public Employee {
  public:
    Salaried(string n, string a, string p, 
              string s, int r) :
       Employee(n, a, p, s, r)
    {
    }

  int pay();
};

int Salaried::pay() {
  return (payrate / 26);
}

class Hourly : public Employee {
  private:
    int hours;
  public:
    Hourly(string n, string a, string p, 
              string s, int r, int h) :
       Employee(n, a, p, s, r)
    {
       hours = h;
    }

  int pay();
};

int Hourly::pay() {
  return (payrate * hours);
}

void print_paystub(StaffMember * s) {
  s->print();
  cout << "  Current pay : " << s->pay() << endl;
}

int main() {
  int ii;
  int totalpay = 0;
  Salaried *  emp1 = new Salaried("Bob Smith", "123 Main", "480-555-8765", 
                           "111-22-3333", 50000);
  Volunteer * emp2 = 
          new Volunteer("Alice Jenkins", "456 4th", "480-555-2341");
  Hourly * emp3 = 
          new Hourly("Mitch Jenkins", "456 4th", "480-555-2341", 
                          "222-33-2222", 10, 40);

  StaffMember * staff[STAFF_SIZE];
  staff[0] = emp1;
  staff[1] = emp2;
  staff[2] = emp3;
  staff[3] = new Salaried("John Franklin", "222 Bank", "480-555-2343", 
                           "111-22-4444", 78000);

  for(ii=0;ii<STAFF_SIZE;ii++)  {
    cout <<"\nEmployee " << ii << ": " << endl;
    print_paystub(staff[ii]);
    totalpay=totalpay + staff[ii]->pay();
  }

  cout << "\nTotal payroll: " << totalpay << endl; 
  cout << "Done!" << endl;  

  return 0;

}
