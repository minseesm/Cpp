#include <iostream>
using namespace std;

#define SIZE 10

// Step 1: Define the structure of a hash table and a node in C++.

// Node structure for the hash table
struct Node {
    int key;
    int value;
    Node* next;
};

// Hash table structure
struct HashTable {
    Node* array[SIZE];
};

// Step 2: Create a hash function to map keys to an index in the hash table.
int hashFunction(int key) {
    return key % SIZE;
}

// Step 3: Implement functions to insert and retrieve data from the hash table.
// Function to insert a key-value pair into the hash table
void insert(HashTable& hashtable, int key, int value) {
    int index = hashFunction(key);
    Node* newNode = new Node;
    newNode->key = key;
    newNode->value = value;
    newNode->next = nullptr;

    // If the bucket is empty, insert the node as the head
    if (hashtable.array[index] == nullptr) {
        hashtable.array[index] = newNode;
    }
    // If the bucket is not empty, append the node at the end
    else {
        Node* curr = hashtable.array[index];
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

// Function to retrieve the value associated with a key from the hash table
int get(const HashTable& hashtable, int key) {
    int index = hashFunction(key);
    Node* curr = hashtable.array[index];
    while (curr != nullptr) {
        if (curr->key == key) {
            return curr->value;
        }
        curr = curr->next;
    }
    return -1;  // Key not found
}

// Step 4: Implement a main function to test the hash table.
int main() {
    HashTable hashtable;
    for (int i = 0; i < SIZE; i++) {
        hashtable.array[i] = nullptr;  // Initialize all buckets to nullptr
    }

    // Insert key-value pairs into the hash table
    insert(hashtable, 10, 42);
    insert(hashtable, 20, 66);
    insert(hashtable, 30, 93);

    // Retrieve values from the hash table using keys
    int value1 = get(hashtable, 10);
    int value2 = get(hashtable, 20);
    int value3 = get(hashtable, 30);

    cout << "Value associated with key 10: " << value1 << endl;
    cout << "Value associated with key 20: " << value2 << endl;
    cout << "Value associated with key 30: " << value3 << endl;

    return 0;
}
