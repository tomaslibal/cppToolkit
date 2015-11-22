/*
 * File:   linkedListTest.cpp
 * Author: tlibal
 *
 * Created on Nov 20, 2015, 10:14:00 PM
 */

#include "linkedListTest.h"

#include <cstdlib>

CPPUNIT_TEST_SUITE_REGISTRATION(linkedListTest);

linkedListTest::linkedListTest() {
}

linkedListTest::~linkedListTest() {
}

void linkedListTest::setUp() {
    
}

void linkedListTest::tearDown() {
}

void linkedListTest::testItInitializesWithFirstNodeAllocated() {
    LinkedList<int> linkedList;
    
    
    CPPUNIT_ASSERT(NULL != linkedList.first);
    CPPUNIT_ASSERT(NULL == linkedList.first->key);
}

void linkedListTest::testItInitializesWithLastNodeNull() {
    LinkedList<int> linkedList;
    
    CPPUNIT_ASSERT(NULL == linkedList.last);
}

void linkedListTest::testAddNodeAddsNewNode() {
    LinkedList<int> linkedList;
    
    CPPUNIT_ASSERT(NULL == linkedList.last);
    linkedList.addNode(42);
    CPPUNIT_ASSERT(NULL != linkedList.last);
    CPPUNIT_ASSERT(linkedList.first->next == linkedList.last);
}

void linkedListTest::testGetLengthReturnsNumOfNodes() {
    LinkedList<int> linkedList;
    
    CPPUNIT_ASSERT(1 == linkedList.getLength());
    linkedList.addNode(42);
    CPPUNIT_ASSERT(2 == linkedList.getLength());
    linkedList.addNode(43);
    CPPUNIT_ASSERT(3 == linkedList.getLength());
}

void linkedListTest::testRemoveNodeRemovesNodes() {
    LinkedList<int> linkedList;
    
    linkedList.addNode(42);
    linkedList.addNode(43);
    linkedList.addNode(44);
    
    linkedNode<int> *originalLast = linkedList.last;
    
    CPPUNIT_ASSERT(4 == linkedList.getLength());
    
    linkedList.removeNode(44);
    
    CPPUNIT_ASSERT(3 == linkedList.getLength());
    CPPUNIT_ASSERT(originalLast != linkedList.last);
    CPPUNIT_ASSERT(linkedList.last == linkedList.first->next->next);
}
