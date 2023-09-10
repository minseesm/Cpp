#pragma once
#ifndef Console_HPP
#define Console_HPP
using namespace std;

void deleteStudentByName(Node *&head, string del_name) ;

void addStudent(Node *&head) ;

int compareRollNumber(const void* a, const void* b);

Node *sortStudents(Node *&head) ;

#endif

