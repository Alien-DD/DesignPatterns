#ifndef TREE_ITERATOR_HPP
#define TREE_ITERATOR_HPP

#include <string>
#include "TreeNode.hpp"

class ITreeIterator{
    virtual TreeNode* begin() = 0;
    virtual TreeNode* end() = 0;
    virtual TreeNode* getNext() = 0;
};

#endif