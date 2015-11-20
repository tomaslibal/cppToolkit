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

void linkedListTest::testItInitializesWithFirstAndLastSetToNull() {
    LinkedList<int> linkedList;
    
    CPPUNIT_ASSERT(NULL == linkedList.first);
    CPPUNIT_ASSERT(NULL == linkedList.last);
}

