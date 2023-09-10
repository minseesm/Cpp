#include "LinkedList.hpp"
#include "MergeSort.hpp"
#include "Console.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {

  Node *student_list = nullptr;

  int choice;
  string del_name;
  string search_name;

  while (1) {
    cout << "\nStudent Management System" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display Students" << endl;
    cout << "3. Sort Students" << endl;
    cout << "4. Search Student by Name" << endl;
    cout << "5. Delete Student by Name" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      addStudent(student_list);
      break;
    case 2:
      printList(student_list);
      break;
    case 3:
      student_list = sortStudents(student_list);
      break;
    case 4:
      cout << "Enter Name to search: ";
      cin >> search_name; // Clear newline from previous input

      searchNode(student_list, search_name);
      break;
    case 5:

      cout << "Enter Name to delete student: ";
      cin >> del_name;
      deleteStudentByName(student_list, del_name);
      break;

    case 6:
      cout << "Exiting the program." << endl;
      return 0;
      break;
    default:
      cout << "Invalid choice. Please try again." << endl;
      break;
    }
  }

  return 0;
}
