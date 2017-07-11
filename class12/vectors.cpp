#include<iostream>
#include<vector>

using namespace std;

int main() {
  vector<int> v(10);     // Create vector of size 10

  v = {34, 23, 30, 19};

  // Display the size of the vector
  cout << "Vector size: " << v.size() << endl;
  cout << "Vector capacity: " << v.capacity() << endl;

  // Print vector with a for loop using array syntax (UNSAFE)
  for (unsigned int ii=0; ii<v.size(); ii++) {
    cout << v[ii] << " ";
  }
  cout << endl << endl;

  cout << "front: " << v.front() << endl;
  cout << " back: " << v.back() << endl;
  cout << endl;


  v.push_back(42);
  v.push_back(37);
  v.push_back(51);
  v.push_back(63);
  v.push_back(17);
  v.push_back(6);
  v.push_back(92);
  v.push_back(77);

  cout << "After push_back:" << endl;  
  cout << "Vector size: " << v.size() << endl;
  cout << "Vector capacity: " << v.capacity() << endl;


  // Print vector using at()
  for (unsigned int jj=0; jj<v.size(); jj++) {
    cout << v.at(jj) << " ";
  }
  cout << endl << endl;;

  v[5] = 99;
  v.pop_back();
  cout << "After v[5]=99 & pop_back:" << endl;  
  // Print vector using for-each
  for (auto& kk : v) {
    cout << kk << " ";
  }
  cout << endl;

  return 0;
}
