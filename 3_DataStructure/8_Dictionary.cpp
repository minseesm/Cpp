#include <cstring> // For strcpy
#include <iostream>
using namespace std;

#define MAX_SIZE 100

struct Entry {
  char key[50];
  int value;
};

struct Dictionary {
  Entry data[MAX_SIZE];
  int count;
};

void initDictionary(Dictionary &d) { d.count = 0; }

bool isEmpty(const Dictionary &d) { return d.count == 0; }

bool isFull(const Dictionary &d) { return d.count == MAX_SIZE; }

void insert(Dictionary &d, const char *key, int value) {
  if (isFull(d)) {
    cout << "Error: Dictionary is full" << endl;
    return;
  }
  strcpy(d.data[d.count].key, key);
  d.data[d.count].value = value;
  d.count++;
}

int search(const Dictionary &d, const char *key) {
  for (int i = 0; i < d.count; i++) {
    if (strcmp(d.data[i].key, key) == 0) {
      return d.data[i].value;
    }
  }
  return -1; // Key not found
}

int main() {
  Dictionary d;
  initDictionary(d);

  insert(d, "apple", 42);
  insert(d, "banana", 66);
  insert(d, "orange", 93);

  cout << "Value associated with key 'apple': " << search(d, "apple") << endl;
  cout << "Value associated with key 'banana': " << search(d, "banana") << endl;
  cout << "Value associated with key 'orange': " << search(d, "orange") << endl;
  cout << "Value associated with key 'grape': " << search(d, "grape") << endl;

  return 0;
}
