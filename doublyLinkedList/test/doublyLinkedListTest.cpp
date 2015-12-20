/*
 * File:   doublyLinkedListTest.cpp
 * Author: tlibal
 *
 * Created on Dec 20, 2015, 3:50:26 PM
 */

#include "doublyLinkedListTest.h"
#include <cstring>


CPPUNIT_TEST_SUITE_REGISTRATION(doublyLinkedListTest);

doublyLinkedListTest::doublyLinkedListTest() {
}

doublyLinkedListTest::~doublyLinkedListTest() {
}

void doublyLinkedListTest::setUp() {
    this->list = new DoublyLinkedList();
}

void doublyLinkedListTest::tearDown() {
    delete this->list;
}

void doublyLinkedListTest::testCreateNode() {
    DoubleLinkNode* node = this->list->createNode("Foo", 42);
    
    CPPUNIT_ASSERT(node->key == "Foo");
}

void doublyLinkedListTest::testInsert() {
    CPPUNIT_ASSERT(this->list->head == NULL);
    CPPUNIT_ASSERT(this->list->tail == NULL);
    
    this->list->insert("Bar", 24);
    
    CPPUNIT_ASSERT(this->list->head->key == "Bar");
    CPPUNIT_ASSERT(this->list->tail->key == "Bar");
    
    this->list->insert("Binky", 1);
    
    CPPUNIT_ASSERT(this->list->head->key == "Binky");
    CPPUNIT_ASSERT(this->list->tail->key == "Bar");
}

void doublyLinkedListTest::testSearch() {
    DoubleLinkNode* x = this->list->search("Bar");
            
    CPPUNIT_ASSERT(x == NULL);
    
    this->list->insert("Baz", 1);
    this->list->insert("Bar", 2);
    this->list->insert("Qux", 3);
    
    x = this->list->search("Bar");
    
    CPPUNIT_ASSERT(x->value == 2);
}