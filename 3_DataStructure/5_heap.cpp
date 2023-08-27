#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<int> &target, int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && target[left] > target[largest]) {
    largest = left;
  }
  
  if (right < n && target[right] > target[largest]) {
    largest = right;
  }
  
  if (largest != i) {
    swap(target[i], target[largest]);
    heapify(target, n, i);
  }
  
}

void heapSort(vector<int> &target) {
  int heap_size = target.size();

  for (int i = heap_size / 2 - 1; i >= 0 ; i--) {
    heapify(target, heap_size, i);
  }

  for (int i = heap_size - 1; i > 0 ; i--) {
   swap(target[0], target[i]);
   heapify(target, i, 0);
  }

}

void insertElement(vector<int> &target, int element) {
  target.push_back(element);
  heapSort(target);
}

void deleteRootElement(vector<int> &target) {
  if (target.empty()) {
    cout << "Heap is empty ! " << endl;
    return ;
  }

  swap(target[0], target.back());
  target.pop_back();
  heapSort(target);
}

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

void printHeap(vector<int> &heap) {
  for (int num : heap) {
    cout << num << " ";
  }
  cout << endl;
}

int main() {
  vector<int> heap = {12, 11, 8, 13, 5, 2, 4};

  cout << "Original Heap Array : " << endl;
  printHeap(heap);

  // Sorting
  heapSort(heap);  // Clear

  cout << "Sorted Heap Array : " << endl;
  printHeap(heap);

  // Searching
  int key;

  cout << "Input search key : ";
  cin >> key;

  int index = binarySearch(heap, key, 0, heap.size() - 1);

  if (index != -1) {
    cout << "Key Found At Index: " << index << endl;
  } else if (index == -2) {
    cout << "Error" << endl;
  } else {
    cout << "Key not found" << endl;
  }

  // insert
  insertElement(heap, 7);

  cout << "After insearting 7 : " << endl;
  printHeap(heap);

  // Delete
  deleteRootElement(heap);
  cout << "After deleting root element : " << endl;
  printHeap(heap);

  return 0;
}