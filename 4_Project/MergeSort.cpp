#include "LinkedList.hpp"
#include <iostream>
#include "MergeSort.hpp"
using namespace std;

Node* merge(Node* left, Node* right) {
    if (!left) return right;
    if (!right) return left;

    Node* mergedList = nullptr;

    if (left->rollNumber <= right->rollNumber) {
        mergedList = left;
        mergedList->next = merge(left->next, right);
    } else {
        mergedList = right;
        mergedList->next = merge(left, right->next);
    }

    return mergedList;
}

Node* mergeSort(Node* head) {
    if (!head || !head->next)
        return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* left = head;
    Node* right = slow->next;
    slow->next = nullptr;

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}
