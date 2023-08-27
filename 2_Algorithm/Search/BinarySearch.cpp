#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &target, int key, int start, int end) {
  if (start > end) {
    return -1;
  }

  int middle = (end + start) / 2;

  if (target[middle] == key) {
    return middle;
  } else if (target[middle] > key) { // Left
    return binarySearch(target, key, start, middle - 1);
  } else if (target[middle] < key) { // Right
    return binarySearch(target, key, middle + 1, end);
  }
  return -2;
}

int main() {

  vector<int> target = {1, 23, 24, 45, 63, 79, 97, 113, 120};

  int key;

  cout << "Input search key : ";
  cin >> key;

  int index = binarySearch(target, key, 0, target.size() - 1);

  if (index != -1) {
    cout << "Key Found At Index: " << index << endl;
  } else if (index == -2) {
    cout << "Error" << endl;
  } else {
    cout << "Key not found" << endl;
  }

  return 0;
}