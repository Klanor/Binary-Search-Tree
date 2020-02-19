#ifndef BINARYTREE_HEADER_H
#define BINARYTREE_HEADER_H

#include<iostream>

class IntBinaryTree
{
    bool empty;
    int _value;
    IntBinaryTree* left;
    IntBinaryTree* right;

    void _print_this();

public:
    IntBinaryTree();
    IntBinaryTree(int value);

    void add(int value);

    void print();

    int getValue() const;

    IntBinaryTree* search(int val);

    ~IntBinaryTree();

};



#endif //BINARYTREE_HEADER_H
