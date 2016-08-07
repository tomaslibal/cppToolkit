/*
 * File:   redBlackTreeTest.cpp
 * Author: tlibal
 *
 */

#include "redBlackTreeTest.h"
#include <cstring>


CPPUNIT_TEST_SUITE_REGISTRATION(redBlackTreeTest);

redBlackTreeTest::redBlackTreeTest() {
}

redBlackTreeTest::~redBlackTreeTest() {
}

void redBlackTreeTest::setUp() {
    rbtree = new RedBlackTree();  
}

void redBlackTreeTest::tearDown() {
    delete rbtree;
}

void redBlackTreeTest::testCreateVoid()
{
    CPPUNIT_ASSERT(rbtree->isNil(*rbtree->getRoot()) == false);
    CPPUNIT_ASSERT(rbtree->isNil(*rbtree->getRoot()->parent) == true);
    CPPUNIT_ASSERT(rbtree->isNil(*rbtree->getRoot()->left) == true);
    CPPUNIT_ASSERT(rbtree->isNil(*rbtree->getRoot()->right) == true);
}

void redBlackTreeTest::testRootIsBlack()
{
    // CPPUNIT_ASSERT(rbtree->root->color == RBCOLOR_BLACK);
}

void redBlackTreeTest::testIsNilTest() {
    RBTreeNode* notNil = new RBTreeNode();
    RBTreeNode* nil = rbtree->getNil();

    CPPUNIT_ASSERT(rbtree->isNil(*notNil) == false);
    CPPUNIT_ASSERT(rbtree->isNil(*nil) == true);

    delete notNil;
}
