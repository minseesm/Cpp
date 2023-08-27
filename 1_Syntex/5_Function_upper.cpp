#include <iostream>
#include <string>    // String
using namespace std; // String, std

// Overloading Functions
int Add(int a, int b) {
  return a + b;
}
int Add(int a, int b, int c) {
  return a + b + c;
}
double Add(double a, double b) {
  return a + b;
}

// Template Function
template <typename Temp_type>
Temp_type AddTemplate(Temp_type a, Temp_type b) {
  return a + b;
}

int main() {

  cout << Add(3, 4) << endl;
  cout << Add(3.3, 4.5) << endl;
  cout << Add(5, 4, 8) << endl;

  cout << AddTemplate(4, 2) << endl;
  cout << AddTemplate(4.934, 2.23) << endl;
  
  return 0;
}