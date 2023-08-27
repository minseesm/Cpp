#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int data) {
  if (root == nullptr) {
    return new Node(data);
  }

  if (data < root->data) {
    root->left = insert(root->left, data);
  } else if (data > root->data) {
    root->right = insert(root->right, data);
  } else {
    cout << "Warning : duplicated" << endl;
  }

  return root;
}

void preorderTraversal(Node *root) {
  if (root != nullptr) {
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
  }
}

void inorderTraversal(Node *root) {
  if (root != nullptr) {
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
  }
}

void postorderTraversal(Node *root) {
  if (root != nullptr) {
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
  }
}

int main() {
  Node* tree = nullptr;
  tree = insert(tree, 13);
  insert(tree, 43);
  insert(tree, 21);
  insert(tree, 4);
  insert(tree, 15);
  insert(tree, 13);
  insert(tree, 18);
  insert(tree, 33);
  insert(tree, 32);
  insert(tree, 7);

  cout << "Preorder traversal of the BST : ";
  preorderTraversal(tree);
  cout << endl;
  
  cout << "Inorder traversal of the BST : ";
  inorderTraversal(tree);
  cout << endl;
  
  cout << "Postorder traversal of the BST : ";
  postorderTraversal(tree);
  cout << endl;

}