#ifndef TREENODE_HPP
#define TREENODE_HPP

template<typename T>
class TreeNode{
    public:
    T element;          //Element contained in the node
    TreeNode<T>* left;  //Pointer to the left child
    TreeNode<T>* right; //Pointer to the right child
};//treeNode

#endif
