#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &target, vector<int> &left, vector<int> &right) {
  int i=0;  // Index for the left subarray
  int j=0;  // Index for the right subarray
  int k=0;  // Index for the merged subarray

  while (i < left.size() && j < right.size()) {
    if (left[i] <= right[j]) {
      target[k] = left[i];
      i++;
    } else {
      target[k] = right[j];
      j++;
    }
    k++;
  }
  
  while (i < left.size()) {
    target[k] = left[i];
    i++;
    k++;
  }

  while (j < right.size()) {
    target[k] = right[j];
    j++;
    k++;
  }
  
}

void mergeSort(vector<int> &target) {
  if (target.size() <= 1) {
    return;
  }

    int middle = target.size() / 2;
    vector<int> left(target.begin(), target.begin() + middle);
    vector<int> right(target.begin() + middle, target.end());

    mergeSort(left);
    mergeSort(right);

    merge(target, left, right);
}

int main() {
  vector<int> target = {1, 113, 23, 97, 45, 63, 79, 24, 120};

  cout << "Array before Merge Sorting : \n";
  for (int i = 0; i < target.size(); i++) {
    cout << target[i] << " ";
  }
  cout << "\n";

  mergeSort(target);

  cout << "Array after Merge Sorting (ascending) : \n";
  for (int i = 0; i < target.size(); i++) {
    cout << target[i] << " ";
  }
  cout << "\n";

  return 0;
}