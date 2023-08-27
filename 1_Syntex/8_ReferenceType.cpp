#include <iostream>
#include <string>
using namespace std;

void refFunction(int &refParams);
void Swap(int &a, int &b);

// C : pointer
// C++ : reference type

int main() {

  int original_value = 10;

  // reference of original_value // reference = address
  int &ref = original_value;

  // change reference : original_value be changed
  ref = 20;
  cout << original_value << endl;

  // in C , used pointer
  // int *p = &original_value;
  // *p = 40;
  // cout << original_value << endl;

  refFunction(original_value);
  cout << original_value << endl;

  int x = 5;
  int y = 8;
  
  Swap(x, y);

  cout << "X : " << x << endl;
  cout << "Y : " << y << endl;
  
  return 0;
}

void refFunction(int &refParams) {
  refParams = 100;
}

void Swap(int &a, int &b) {
  int temp = a;
  a = b ;
  b = temp;
}