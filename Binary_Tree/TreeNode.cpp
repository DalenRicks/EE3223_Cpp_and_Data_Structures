#include <iostream>
#include "TreeNode.hpp"

template<typename T>
TreeNode<T>::TreeNode(T element){
    this->element = element;
        left = nullptr;
        right = nullptr;

    std:cout << this->element << endl;
}

template<typename T>
bool TreeNode<T>::insertNode(T element){
    if(root == nullptr){
        root = new TreeNode<T>(element);
    }else{
        //Locate the parent node

        current = root;
        while(current != nullptr){
            if(element < current -> element){
                parent = current;
                current = current -> left;
            }else if(element > current -> element){
                parent = current;
                current = current -> right;
            }else{
                return false;
            }

            if(element < parent->element){
                parent -> left = new TreeNode<T>(element);
                return true;
            }else{
                parent -> right new TreeNode<T>(element);
                return true;
            }
        }
    }
}

/*
template<typename T>
void TreeNode<T>::printNode(){
    std:cout << "Value contained: " << this.element << ". Value in left node: " << this.left << ". Value in right node: " << this.right << endl;
}
*/

template<typename T>
void TreeNode<T>::preorder(){
    
}

template<typename T>
void TreeNode<T>::inorder(){
    
}

template<typename T>
void TreeNode<T>::postorder(){
    
}