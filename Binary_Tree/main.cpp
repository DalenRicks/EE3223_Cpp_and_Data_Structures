#include <iostream>
#include "bst.hpp"

using namespace std;

int main(){
  BST<int> bst;

    /*Code to test the logic*/
    bst.root = bst.Insert(bst.root, 6); bst.root = bst.Insert(bst.root, 2); bst.root = bst.Insert(bst.root, 8);
    bst.root = bst.Insert(bst.root, 1); bst.root = bst.Insert(bst.root, 4); bst.root = bst.Insert(bst.root, 7);
    bst.root = bst.Insert(bst.root, 9); bst.root = bst.Insert(bst.root, 3); bst.root = bst.Insert(bst.root, 5);

    // Print the nodes in inorder
    cout << "Inorder traversal: ";
    bst.Inorder(bst.root);
    cout << "\n";

    // Print the nodes in preorder
    cout << "Preorder traversal: ";
    bst.Preorder(bst.root);
    cout << "\n";

    // Print the nodes in postorder
    cout << "Postorder traversal: ";
    bst.Postorder(bst.root);
    cout << "\n";
}