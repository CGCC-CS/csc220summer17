#include<iostream>
#include<vector>

using namespace std;

int main() {
  vector<int> v(10);      // Create vector of size 10

  v = {34, 23, 30, 19};

  // display the size of the vector
  cout << "Vector size: " << v.size() << endl;
  cout << "Vector capacity: " << v.capacity() << endl;

  // Print vector with a for loop using array syntax (UNSAFE)
  for (int ii=0; ii < v.capacity(); ii++) {
    cout << v[ii] << ", ";
  }
  cout << endl;

  cout << " front: " << v.front() << endl;
  cout << " back: " << v.back() << endl;


  cout << endl << "push_back 42 & 37" << endl;
  v.push_back(42);  
  v.push_back(37);  

  // Print vector using at()
  //for (int ii=0; ii < v.capacity(); ii++) {
  for (int ii=0; ii < v.size(); ii++) {
    cout << v.at(ii) << ", ";
  }
  cout << endl;
  cout << " front: " << v.front() << endl;
  cout << " back: " << v.back() << endl;


  cout << endl; 
  v.pop_back();
  cout << "After pop: " << endl;
  // Print vector using for-each
  for (auto& ii : v) {
    cout << ii << ", ";
  }
  cout << endl; 
 
  return 0;
}
