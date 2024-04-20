#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new Node in heap
Node* GetNewNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// To insert data in BST, returns address of root node 
Node* Insert(Node* root, int data) {
    //if tree is empty
    if (root == NULL) {
        root = GetNewNode(data);
    }
    // if data to be inserted is lesser, insert in left subtree. 
    else if (data <= root->data) {
        root->left = Insert(root->left, data);
    }
    // else, insert in right subtree. 
    else {
        root->right = Insert(root->right, data);
    }
    return root;
}

int main() {
    Node* root = NULL;  // Creating an empty tree
    /*Code to test the logic*/
    root = Insert(root, 6); root = Insert(root, 2); root = Insert(root, 8);
    root = Insert(root, 1); root = Insert(root, 4); root = Insert(root, 7);
    root = Insert(root, 9); root = Insert(root, 3); root = Insert(root, 5);
    // Ask user to enter a number.  

    //If number is found, print "FOUND"
    //else print "NOT FOUND" 
}
