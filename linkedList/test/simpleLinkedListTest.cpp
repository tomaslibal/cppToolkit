/*
 * File:   linkedListTest.cpp
 * Author: tlibal
 *
 * Created on Nov 20, 2015, 10:14:00 PM
 */

#include "simpleLinkedListTest.h"

#include <cstdlib>
#include <cstring>

CPPUNIT_TEST_SUITE_REGISTRATION(linkedListTest);

linkedListTest::linkedListTest() {
}

linkedListTest::~linkedListTest() {
}

void linkedListTest::setUp() {
    this->list = new SimpleLinkedList<int>();
}

void linkedListTest::tearDown() {
    delete this->list;
}

void linkedListTest::testItInitializesWithFirstNodeAllocated() {
    CPPUNIT_ASSERT(NULL != list->head);
    CPPUNIT_ASSERT(NULL == list->head->key);
}

void linkedListTest::testItInitializesWithLastNodeNull() {
    CPPUNIT_ASSERT(NULL == list->tail);
}

void linkedListTest::testAddNodeAddsNewNode() {
    CPPUNIT_ASSERT(NULL == list->tail);
    list->addNode(42);
    CPPUNIT_ASSERT(NULL != list->tail);
    CPPUNIT_ASSERT(list->head->next == list->tail);
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
    
    linkedNode<int> *originalLast = list->tail;
    
    CPPUNIT_ASSERT(4 == list->getLength());
    
    list->removeNode(44);
    
    CPPUNIT_ASSERT(3 == list->getLength());
    CPPUNIT_ASSERT(originalLast != list->tail);
    CPPUNIT_ASSERT(list->tail == list->head->next->next);
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

void linkedListTest::testGetNodeByKey() {
    list->addNode("Foo", 42);
    list->addNode("Bar", 43);
    
    linkedNode<int> *result = list->getNode("Bar");
    
    CPPUNIT_ASSERT(result->value == 43);
    
    result = list->getNode("NonExisting");
    
    CPPUNIT_ASSERT(result == NULL);
}

void linkedListTest::testGetNodeByValue() {
    list->addNode("Foo", 42);
    list->addNode("Bar", 43);
    
    linkedNode<int> *result = list->getNode(43);
    
    CPPUNIT_ASSERT(strcmp(result->key, "Bar") == 0);
    
    result = list->getNode(1024);
    
    CPPUNIT_ASSERT(result == NULL);
}

void linkedListTest::testGetNodeByKeyValue() {
    list->addNode("Foo", 42);
    list->addNode("Bar", 43);
    
    linkedNode<int> *result = list->getNode("Bar", 43);
    
    CPPUNIT_ASSERT(result->value == 43);
    CPPUNIT_ASSERT(strcmp(result->key, "Bar") == 0);
    
    result = list->getNode("Foo", 1024);
    
    CPPUNIT_ASSERT(result == NULL);
}

void linkedListTest::testSum() {
    list->addNode("Foo", 1);
    list->addNode("Bar", 2);
    list->addNode("Baz", 3);
    
    int result = list->sum();
    
    CPPUNIT_ASSERT(result == 6);
}

void linkedListTest::testInsertAtHead() {
    list->addNode("foo", 42);
    list->addNodeAtHead("bar", 24);
    
    CPPUNIT_ASSERT(list->head->value == 24);
}

void linkedListTest::testSetKey() {
    list->addNodeAtHead("binky", 1);
    
    list->setKey(list->head, "minky_foo");
    
    CPPUNIT_ASSERT(strcmp(list->head->key, "minky_foo") == 0);
}
