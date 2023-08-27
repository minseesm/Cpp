#include <iostream>
#include <string>    // String
using namespace std; // String, std

void menu() {
  
    cout << "[1] cola" << endl;
    cout << "[2] diet cola" << endl;
    cout << "[3] 7up" << endl;
    cout << "[4] cider" << endl;
    cout << "[5] exit" << endl;
  
}

int main() {

  int select;
  string name;
  string result;
  
  do {

    menu();                                                            
    cin >> select;
  
    switch (select) {
    case 1:
      result = "cola";
      break;
    case 2:
      result = "diet cola";
      break;
    case 3:
      result = "7up";
      break;
    case 4:
      result = "cider";
      break;
    case 5:
      break;  
    default:
      result = "Wrong input";
    }
  
    cout << result << endl;
  } while (select != 5);
    
  return 0;
}