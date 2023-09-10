#include "LinkedList.hpp"
#include "Console.hpp"
#include "MergeSort.hpp"
#include <iostream>
#include <string.h>
using namespace std;

void deleteStudentByName(Node *&head, string del_name) {

  deleteNode(head, del_name);
  cout << "Student with Name" << del_name << "deleted successfully" << endl;
}

void addStudent(Node *&head) {
  int rollNumber;
  string name;
  int age;
  float math_marks;

  cout << "Enter Roll Number: " << endl;
  cin >> rollNumber;
  cout << "Enter Name: " << endl;
  cin >> name;
  cout << "Enter Age: " << endl;
  cin >> age;
  cout << "Enter Math Marks: " << endl;
  cin >> math_marks;

  insertEnd(head, rollNumber, name, age, math_marks);
  cout << "Student added successfully." << endl;
}

Node *sortStudents(Node *&head) {
  cout << "Students sorted successfully." << endl;
  return mergeSort(head);
}
