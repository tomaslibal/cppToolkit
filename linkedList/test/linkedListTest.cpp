/*
 * File:   linkedListTest.cpp
 * Author: tlibal
 *
 * Created on Nov 20, 2015, 10:14:00 PM
 */

#include "linkedListTest.h"

#include <cstdlib>
#include <cstring>

CPPUNIT_TEST_SUITE_REGISTRATION(linkedListTest);

linkedListTest::linkedListTest() {
}

linkedListTest::~linkedListTest() {
}

void linkedListTest::setUp() {
    this->list = new LinkedList<int>();
}

void linkedListTest::tearDown() {
    delete this->list;
}

void linkedListTest::testItInitializesWithFirstNodeAllocated() {
    CPPUNIT_ASSERT(NULL != list->first);
    CPPUNIT_ASSERT(NULL == list->first->key);
}

void linkedListTest::testItInitializesWithLastNodeNull() {
    CPPUNIT_ASSERT(NULL == list->last);
}

void linkedListTest::testAddNodeAddsNewNode() {
    CPPUNIT_ASSERT(NULL == list->last);
    list->addNode(42);
    CPPUNIT_ASSERT(NULL != list->last);
    CPPUNIT_ASSERT(list->first->next == list->last);
}

void linkedListTest::testAddNodeWithKeyValue() {
    list->addNode("Foo", 42);
    
    linkedNode<int> *result = list->getAtIndex(1);
    
    CPPUNIT_ASSERT(strcmp(result->key, "Foo") == 0);
    CPPUNIT_ASSERT(result->value == 42);
}

void linkedListTest::testGetLengthReturnsNumOfNodes() {
    CPPUNIT_ASSERT(1 == list->getLength());
    list->addNode(42);
    CPPUNIT_ASSERT(2 == list->getLength());
    list->addNode(43);
    CPPUNIT_ASSERT(3 == list->getLength());
}

void linkedListTest::testRemoveNodeRemovesNodes() {
    list->addNode(42);
    list->addNode(43);
    list->addNode(44);
    
    linkedNode<int> *originalLast = list->last;
    
    CPPUNIT_ASSERT(4 == list->getLength());
    
    list->removeNode(44);
    
    CPPUNIT_ASSERT(3 == list->getLength());
    CPPUNIT_ASSERT(originalLast != list->last);
    CPPUNIT_ASSERT(list->last == list->first->next->next);
}

void linkedListTest::testGetAtIndexReturnsNodeAtGivenIndex() {
    list->addNode(42);
    list->addNode(43);
    list->addNode(44);
    
    linkedNode<int> *result = list->getAtIndex(2);
    
    CPPUNIT_ASSERT(result != NULL);
    CPPUNIT_ASSERT(result->value == 43);
    
    result = list->getAtIndex(3);
    
    CPPUNIT_ASSERT(result != NULL);
    CPPUNIT_ASSERT(result->value == 44);
}

void linkedListTest::testGetAtIndexReturnsNullIfIndexOutOfBounds() {
    list->addNode(42);
    list->addNode(43);
    list->addNode(44);
    
    linkedNode<int> *result = list->getAtIndex(4);
    
    CPPUNIT_ASSERT(result == NULL);
}
