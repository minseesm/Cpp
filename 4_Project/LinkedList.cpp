#include "LinkedList.hpp"
#include <iostream>
#include <string>
using namespace std;

Node *createNode(int rollNumber, string name, int age, float math_marks) {
  Node *newNode = new Node;
  newNode->rollNumber = rollNumber;
  newNode->name = name;
  newNode->age = age;
  newNode->math_marks = math_marks;
  newNode->next = nullptr;
  return newNode;
}

void insertEnd(Node *&head, int rollNumber, string name, int age,
               float math_marks) {
  Node *newNode = createNode(rollNumber, name, age, math_marks);

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

void deleteNode(Node *&head, string del_name) {
  if (head == nullptr) {
    return;
  }

  Node *temp = head;

  if (head->name == del_name) {
    head = head->next;
    delete temp;
    return;
  }

  while (temp->next != nullptr && temp->next->name != del_name) {
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

void searchNode(Node *&head, string search_name) {
  if (head == nullptr) {
    return;
  }

  Node *temp = head;

  if (head->name == search_name) {
    cout << "Student Found: " << endl;
    cout << "Name: " << temp->name << endl;
    cout << "Roll Number: " << temp->rollNumber << endl;
    cout << "Age: " << temp->age << endl;
    cout << "Math Marks: " << temp->math_marks << endl;
    return;
  } else {

    while (temp->next != nullptr) {
      temp = temp->next;
      if (temp->name == search_name) {
        cout << "Student Found: " << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Roll Number: " << temp->rollNumber << endl;
        cout << "Age: " << temp->age << endl;
        cout << "Math Marks: " << temp->math_marks << endl;

        return;
      }
    }
  }
  cout << "Can't Found" << endl;
}

void printList(Node *head) {
  Node *temp = head;
  while (1) {
    cout << "Student No." << temp->rollNumber << endl;
    cout << "Student Name : " << temp->name << endl;
    cout << "Student Age : " << temp->age << endl;
    cout << "Student Math Marks :" << temp->math_marks << endl;
    cout << endl;
    if (temp->next != nullptr) {
      temp = temp->next;
    } else {
      return;
    }
  }
  cout << endl;
}
