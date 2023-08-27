#include <iostream>
#include <string>    // String
using namespace std; // String, std

int main() {

  int age;
  string result;

  cin >> age;
  // if-else : in range
  if (age > 20) {
    // std::cout << "Beer Party" << std::endl;
    result = "Beer Party";
  } else {
    // std::cout << "Take Juice" << std::endl;
    result = "Take Juice";
  }

  cout << result << endl;
  // switch : variable (button, vending machine)

  cout << "[1] cola" << endl;
  cout << "[2] diet cola" << endl;
  cout << "[3] 7up" << endl;
  cout << "[4] cider" << endl;

  int select;

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
  default:
    result = "Wrong input";
  }

  cout << result << endl;

  // examing : Only A Condition
  (age > 20 ? result = "Beer" : result = "Juice");

  cout << result << endl;

  return 0;
}