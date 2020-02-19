#include "Header.h"

int main()
{
    IntBinaryTree* tree = new IntBinaryTree;
    IntBinaryTree* tmpt;
    int tmp=1;
    std::cout << "Binary Search Tree" << std::endl;
    while (tmp != 0)
    {
        std::cin >> tmp;
        tree->add(tmp);
    }
    tree->print();

    delete tree;
    return 0;
}
