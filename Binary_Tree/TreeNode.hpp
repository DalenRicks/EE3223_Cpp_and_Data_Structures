//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** A class of nodes for a link-based binary tree.
 Listing 16-2.
 @file TreeNode.hpp */
 
#ifndef TREENODE_HPP
#define TREENODE_HPP

template<typename T>
class TreeNode{
    public:
    T element;          //Element contained in the node
    TreeNode<T>* left;  //Pointer to the left child
    TreeNode<T>* right; //Pointer to the right child

    TreeNode(T element);//Constructor

    bool insertNode(T element);
    //void printNode();
    void preorder();
    void inorder();
    void postorder();
};//TreeNode

#endif 
