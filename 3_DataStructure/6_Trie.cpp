#include <iostream>
#include <string>
using namespace std;

// Step 1: Define the structure of a hash table and a node in C++.

#define ALPHABET_SIZE 26

struct TrieNode {
  TrieNode *children[ALPHABET_SIZE];
  int isEndOfWord;
};

// Step 2: Create a new trie node and initialize its members.

TrieNode *createNode() {
  TrieNode *newNode = new TrieNode;
  newNode->isEndOfWord = 0;

  for (int i = 0; i < ALPHABET_SIZE; i++) {
    newNode->children[i] = nullptr;
  }

  return newNode;
}

// Step 3: Implement functions to insert and search words in the trie.

void insert(TrieNode *root, const char *word) {
  TrieNode *curr = root;

  for (int i = 0; word[i] != '\0'; i++) {
    int index = word[i] - 'a';

    if (curr->children[index] == nullptr) {
      curr->children[index] = createNode();
    }

    curr = curr->children[index];
  }

  curr->isEndOfWord = 1;
}

int search(TrieNode *root, const char *word) {
  TrieNode *curr = root;

  for (int i = 0; word[i] != '\0'; i++) {
    int index = word[i] - 'a';

    if (curr->children[index] == nullptr) {
      return 0; // Word not found
    }

    curr = curr->children[index];
  }

  return (curr != nullptr && curr->isEndOfWord);
}

// Step 4: Implement a main function to test the trie.

int main() {
  TrieNode *root = createNode();

  // Insert words into the trie
  insert(root, "apple");
  insert(root, "banana");
  insert(root, "orange");

  // Search for words in the trie
  cout << "Search result for 'apple': "
       << (search(root, "apple") ? "Found" : "Not Found") << endl;
  cout << "Search result for 'banana': "
       << (search(root, "banana") ? "Found" : "Not Found") << endl;
  cout << "Search result for 'orange': "
       << (search(root, "orange") ? "Found" : "Not Found") << endl;
  cout << "Search result for 'grape': "
       << (search(root, "grape") ? "Found" : "Not Found") << endl;

  return 0;
}
