#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
  vector<int> data;
  bool isEmpty() const { return data.empty(); }
  bool isFull() const { return false; }

public:
  Stack() {}

  int peek() const {
    if (isEmpty()) {
      cout << "Error: Stack is empty" << endl;
      return -1;
    }
    return data.back();
  }

  void push(int value) { data.push_back(value); }

  int pop() {
    if (isEmpty()) {
      cout << "Error: Stack is empty" << endl;
      return -1;
    }
    int topElement = data.back();
    data.pop_back();
    return topElement;
  }
};

int main() {
  Stack first_stack;
  Stack second_stack;

  first_stack.push(5);
  first_stack.push(12);
  first_stack.push(43);
  first_stack.push(27);
  first_stack.push(63);
  second_stack.push(2);
  second_stack.push(9);
  second_stack.push(41);
  second_stack.push(33);
  second_stack.push(12);

  cout << "Top first stack element  " << first_stack.peek() << endl;
  cout << "Pop first stack  " << first_stack.pop() << endl;
  cout << "Pop first stack  " << first_stack.pop() << endl;
  cout << "Top first stack element  " << first_stack.peek() << endl;
  cout << "Pop second stack  " << second_stack.pop() << endl;
  cout << "Top second stack element  " << second_stack.peek() << endl;

  first_stack.push(74);
  cout << "Top first stack element  " << first_stack.peek() << endl;
  second_stack.push(74);
  cout << "Top second stack element  " << second_stack.peek() << endl;
}