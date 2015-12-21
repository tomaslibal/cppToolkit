    /*
 * File:   linkedListTest.cpp
 * Author: tlibal
 *
 * Created on Nov 20, 2015, 10:14:00 PM
 */

#include "simpleLinkedListTest.h"

#include <cstdlib>
#include <cstring>
#include <string.h>

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

void linkedListTest::testItInitializesWithFirstNodeNULL() {
    CPPUNIT_ASSERT(NULL == list->head);
}

void linkedListTest::testAddNodeAddsNewNode() {
    list->insert("Foo", 42);
    CPPUNIT_ASSERT(NULL != list->head);
    CPPUNIT_ASSERT(strcmp(list->head->key, "Foo") == 0);
    CPPUNIT_ASSERT(list->head->value == 42);
}

void linkedListTest::testGetLengthReturnsNumOfNodes() {
    CPPUNIT_ASSERT(0 == list->getLength());
    list->insert("Foo", 42);
    CPPUNIT_ASSERT(1 == list->getLength());
    list->insert("Bar", 43);
    CPPUNIT_ASSERT(2 == list->getLength());
}

void linkedListTest::testRemoveNodeRemovesNodes() {
    list->insert("Foo", 42);
    list->insert("Bar", 43);
    list->insert("Baz", 44);
    
    CPPUNIT_ASSERT(3 == list->getLength());
    
//    list->removeNode(44);
//    
//    CPPUNIT_ASSERT(3 == list->getLength());
//    CPPUNIT_ASSERT(originalLast != list->tail);
//    CPPUNIT_ASSERT(list->tail == list->head->next->next);
}

void linkedListTest::testGetAtIndexReturnsNodeAtGivenIndex() {
    list->insert("Foo", 42);
    list->insert("Bar", 43);
    list->insert("Baz", 44);
    
//    linkedNode<int> *result = list->atIndex(2);
//    
//    CPPUNIT_ASSERT(result != NULL);
//    CPPUNIT_ASSERT(result->value == 43);
//    
//    result = list->atIndex(3);
//    
//    CPPUNIT_ASSERT(result != NULL);
//    CPPUNIT_ASSERT(result->value == 44);
}

void linkedListTest::testGetAtIndexReturnsNullIfIndexOutOfBounds() {
    list->insert("Foo", 42);
    list->insert("Bar", 43);
    list->insert("Baz", 44);
    
//    linkedNode<int> *result = list->atIndex(4);
//    
//    CPPUNIT_ASSERT(result == NULL);
}

void linkedListTest::testGetNodeByKey() {
    list->insert("Foo", 42);
    list->insert("Bar", 43);
    
    linkedNode<int> *result = list->search("Bar");
    
    CPPUNIT_ASSERT(result->value == 43);
    
    result = list->search("NonExisting");
    
    CPPUNIT_ASSERT(result == NULL);
}

void linkedListTest::testGetNodeByValue() {
    list->insert("Foo", 42);
    list->insert("Bar", 43);
    
    linkedNode<int> *result = list->search(43);
    
    CPPUNIT_ASSERT(strcmp(result->key, "Bar") == 0);
    
    result = list->search(1024);
    
    CPPUNIT_ASSERT(result == NULL);
}

void linkedListTest::testGetNodeByKeyValue() {
    list->insert("Foo", 42);
    list->insert("Bar", 43);
    
    linkedNode<int> *result = list->search("Bar", 43);
    
    CPPUNIT_ASSERT(result->value == 43);
    CPPUNIT_ASSERT(strcmp(result->key, "Bar") == 0);
    
    result = list->search("Foo", 1024);
    
    CPPUNIT_ASSERT(result == NULL);
}

void linkedListTest::testSum() {
    list->insert("Foo", 1);
    list->insert("Bar", 2);
    list->insert("Baz", 3);
    
    int result = list->sum();
    
    CPPUNIT_ASSERT(result == 6);
}

void linkedListTest::testSetKey() {
    list->insert("binky", 1);
    
    list->setKey(list->head, "minky_foo");
    
    CPPUNIT_ASSERT(strcmp(list->head->key, "minky_foo") == 0);
}
