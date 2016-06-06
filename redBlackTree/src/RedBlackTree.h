/* 
 * File:   RedBlackTree.h
 * Author: tlibal
 *
 * Created on January 3, 2016, 7:31 PM
 */

#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H

#include <string>

#define RBCOLOR_BLACK 1
#define RBCOLOR_RED   0

struct RBTreeNode {
    std::string key;
    int value;
    int color;
    
    RBTreeNode* parent;
    RBTreeNode* left;
    RBTreeNode* right;
};

/*
 * Red-Black Tree with sentinel nodes.
 * 
 */
class RedBlackTree {
public:
    RedBlackTree();
    RedBlackTree(RedBlackTree const& orig);
    virtual ~RedBlackTree();
    
    void insert(RBTreeNode const& z);
    void remove();
private:
    RBTreeNode* root;
    RBTreeNode* nil;
    
    /*
     * insertion and deletion may violate the red-black tree conditions so
     * this function is called to restore them if needed.
     */
    void leftRotate(RBTreeNode* x);
    void rightRotate(RBTreeNode* x);
};

#endif /* REDBLACKTREE_H */

