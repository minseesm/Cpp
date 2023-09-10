
#ifndef LinkedList_HPP
#define LinkedList_HPP
#include <string>
using namespace std;

struct Node {
    int rollNumber;
    string name;
    int age;
    float math_marks;
    Node *next;
};

void insertEnd(Node *&head, int rollNumber, string name, int age, float math_marks);
void deleteNode(Node *&head, string del_name);
void printList(Node *head);
void searchNode(Node *&head, string search_name);

#endif