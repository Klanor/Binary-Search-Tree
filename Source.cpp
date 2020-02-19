#include "Header.h"

IntBinaryTree::IntBinaryTree()
{
    empty = true;
    _value = 0;
    left = nullptr;
    right = nullptr;
}

IntBinaryTree::IntBinaryTree(int value)
{
    empty = false;
    _value = value;
    left = nullptr;
    right = nullptr;
}

void IntBinaryTree::_print_this()
{
    std::cout << _value << " ";
}

void IntBinaryTree::add(int value)
{
    if (value > 0)
    {
        if (empty)
        {
            _value = value;
            empty = false;
        }
        else {
            if (_value == value)
                return;
            else if (value > _value)
            {
                if (right == nullptr)
                {
                    right = new IntBinaryTree(value);
                }
                else
                {
                    right->add(value);
                }
            }
            else
            {
                if (left == nullptr)
                {
                    left = new IntBinaryTree(value);
                }
                else
                {
                    left->add(value);
                }
            }
        }
    }
}

void IntBinaryTree::print()
{
    if (left != nullptr)
    {
        left->print();
    }
    _print_this();
    if (right != nullptr)
    {
        right->print();
    }
}

int IntBinaryTree::getValue() const
{
    if (empty)
    {
        throw "Empty tree";
    }
    return _value;
}

IntBinaryTree* IntBinaryTree::search(int val)
{
    if (val == _value)
        return this;
    else if (val < _value && left != nullptr)
    {
        left->search(val);
    }
    else if (val > _value&& right != nullptr)
    {
        right->search(val);
    }
    else
        return nullptr;
}



IntBinaryTree::~IntBinaryTree()
{
    if (left != nullptr)
        delete left;
    if (right != nullptr)
        delete right;
}
