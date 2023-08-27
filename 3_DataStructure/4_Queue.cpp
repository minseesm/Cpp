#include <iostream>
#include <vector>

using namespace std;

class Queue {
private:
  vector<int> data;
  bool isEmpty() const { return data.empty(); }

public:
  Queue() {}

  int peek() const {
    if (isEmpty()) {
      cout << "Error: Queue is empty" << endl;
      return -1;
    }
    return data.front();
  }

  void enqueue(int value) { data.push_back(value); }

  int dequeue() {
    if (isEmpty()) {
      cout << "Error: Queue is empty" << endl;
      return -1;
    }
    int frontElement = data.front();
    data.erase(data.begin());
    return frontElement;
  }
};

int main() {
  Queue first_queue;
  Queue second_queue;

  first_queue.enqueue(5);
  first_queue.enqueue(12);
  first_queue.enqueue(43);
  first_queue.enqueue(27);
  first_queue.enqueue(63);
  second_queue.enqueue(2);
  second_queue.enqueue(9);
  second_queue.enqueue(41);
  second_queue.enqueue(33);
  second_queue.enqueue(12);

  cout << "Top first queue element  " << first_queue.peek() << endl;
  cout << "Dequeue first queue  " << first_queue.dequeue() << endl;
  cout << "Dequeue first queue  " << first_queue.dequeue() << endl;
  cout << "Top first queue element  " << first_queue.peek() << endl;
  cout << "Dequeue second queue  " << second_queue.dequeue() << endl;
  cout << "Top second queue element  " << second_queue.peek() << endl;

  first_queue.enqueue(74);
  cout << "Top first queue element  " << first_queue.peek() << endl;
  second_queue.enqueue(74);
  cout << "Top second queue element  " << second_queue.peek() << endl;
}