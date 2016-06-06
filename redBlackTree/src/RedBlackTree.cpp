/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RedBlackTree.cpp
 * Author: tlibal
 * 
 * Created on January 3, 2016, 7:31 PM
 */

#include "RedBlackTree.h"

RedBlackTree::RedBlackTree() {
    root = new RBTreeNode();
    root->color = RBCOLOR_BLACK;
    
    // sentinel node representing NULL
    nil = new RBTreeNode();
    nil->color = RBCOLOR_BLACK;
    
    root->parent = nil;
    root->left = nil;
    root->right = nil;
    
}

RedBlackTree::RedBlackTree(const RedBlackTree& orig) {
}

RedBlackTree::~RedBlackTree() {
    delete root;
    delete nil;
}

/*
 * x - the node to have its child nodes left rotated
 */
void RedBlackTree::leftRotate(RBTreeNode* x) {
    RBTreeNode* y = x->right;
    x->right = y->left;
    
    if (y->left != nil) {
        y->left->parent = x;
    }
    y->parent = x->parent;
    
    if (x->parent == nil) {
        root = y;
    } else if (x == x->parent->left) {
        x->parent->left = y;
    } else {
        x->parent->right = y;
    }
    y->left = x;
    x->parent = y;
}

void RedBlackTree::rightRotate(RBTreeNode* x)
{
    RBTreeNode* y = x->left;
    x->left = y->right;
    
    if (y->right != nil) {
        y->right->parent = x;
    }
    
    y->parent = x->parent;
    
    if (x->parent == nil) {
        root = y;
    } else if (x == x->parent->right) {
        x->parent->right = y;
    } else {
        x->parent->left = y;
    }
    
    y->right = x;
    x->parent = y;
}
