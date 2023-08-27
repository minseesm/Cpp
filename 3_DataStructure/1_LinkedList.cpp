#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *createNode(int data) {
  Node *newNode = new Node;
  newNode->data = data;
  newNode->next = nullptr;
  return newNode;
}

void insertFront(Node *&head, int data) {
  Node *newNode = createNode(data);
  newNode->next = head;
  head = newNode;
}

void insertEnd(Node *&head, int data) {
  Node *newNode = createNode(data);

  if (head == nullptr) {
    head = newNode;
  } else {
    Node *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

void deleteNode(Node *&head, int data) {
  if (head == nullptr) {
    return;
  }

  Node *temp = head;

  if (head->data == data) {
    head = head->next;
    delete temp;
    return;
  }

  while (temp->next != nullptr && temp->next->data != data) {
    temp = temp->next;
  }

  if (temp->next != nullptr) {
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    return;
  }

  cout << "Can't Found" << endl;
}

void printList(Node *head) {
  Node *temp = head;
  while (temp->next != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node *list_first = nullptr;
  Node *list_second = nullptr;

  insertFront(list_first, 5);
  insertFront(list_first, 50);
  insertEnd(list_second, 35);
  insertFront(list_first, 10);
  insertEnd(list_second, 33);
  insertEnd(list_first, 12);
  insertFront(list_first, 23);
  insertFront(list_second, 41);
  insertFront(list_second, 16);
  insertEnd(list_second, 32);
  insertFront(list_first, 57);
  insertEnd(list_second, 62);
  insertEnd(list_first, 11);
  insertFront(list_first, 7);

  cout << "First List : ";
  printList(list_first);
  cout << "Second List : ";
  printList(list_second);

  deleteNode(list_first, 10);
  deleteNode(list_second, 16);
  deleteNode(list_second, 50);

  cout << "First List : ";
  printList(list_first);
  cout << "Second List : ";
  printList(list_second);

  while (list_first != nullptr) {
    Node *temp = list_first;
    list_first = list_first->next;
    delete temp;
  }

  while (list_second != nullptr) {
    Node *temp = list_second;
    list_second = list_second->next;
    delete temp;
  }

  return 0;
}