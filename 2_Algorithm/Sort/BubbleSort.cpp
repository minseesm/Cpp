#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &target) {
  for (int i=0; i<target.size() -1; i++) {
    for (int j=0; j<target.size() - 1; j++) {
      if (target[j] > target[j+1]) {
        swap(target[j], target[j+1]);
      }
    }
  }
}

int main() {
  vector<int> target = {1, 113, 23, 97, 45, 63, 79, 24, 120};

  cout << "Array before Bubble Sorting : \n";
  for (int i=0; i < target.size(); i++){
    cout << target[i] << " ";
  }
  cout << "\n" ;

  bubbleSort(target);

  cout << "Array after Bubble Sorting (ascending) : \n";
  for (int i=0; i < target.size(); i++){
    cout << target[i] << " ";
  }
  cout << "\n" ;
  
  return 0;
}