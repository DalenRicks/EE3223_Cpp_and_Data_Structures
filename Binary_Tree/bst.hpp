#ifndef BST_HPP
#define BST_HPP

#include <iostream>
#include "treeNode.hpp"

template<typename T>
class BST{
    private:
        TreeNode<T>* GetNewNode(T element){
            TreeNode<T>* newNode = new TreeNode<T>();
            if (!newNode) {
                std::cout << "Memory error\n";
                return NULL;
            }
            newNode->element = element;
            newNode->left = newNode->right = NULL;
            return newNode;
        }
    public:
    TreeNode<T>* root;

    BST(){  //Constructor
        root = NULL;
    }

    // To insert data in BST, returns address of root node 
    TreeNode<T>* Insert(TreeNode<T>* root, T element){
        //if tree is empty
        if (root == NULL) {
            root = GetNewNode(element);
        }
        // if data to be inserted is lesser, insert in left subtree. 
        else if (element <= root->element) {
            root->left = Insert(root->left, element);
        }
        // else, insert in right subtree. 
        else {
            root->right = Insert(root->right, element);
        }
        return root;
    }

    // Function to do inorder traversal
    void Inorder(TreeNode<T>* root){
        if(root == NULL) return; // exit condition

        Inorder(root->left);  // Visit left subtree
        std::cout << root->element << " ";  // Print data
        Inorder(root->right); // Visit right subtree
    }

    // Function to do preorder traversal
    void Preorder(TreeNode<T>* root){
        if(root == NULL) return; // exit condition

        std::cout << root->element << " ";  // Print data
        Preorder(root->left);  // Visit left subtree
        Preorder(root->right); // Visit right subtree
    }

    // Function to do postorder traversal
    void Postorder(TreeNode<T>* root){
        if(root == NULL) return; // exit condition

        Postorder(root->left);  // Visit left subtree
        Postorder(root->right); // Visit right subtree
        std::cout << root->element << " ";  // Print data
    }

};//BST

#endif
