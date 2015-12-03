/*
 * File:   binsearchTest.cpp
 * Author: tlibal
 *
 * Created on Dec 3, 2015, 7:53:04 PM
 */

#include "binsearchTest.h"

#include "../binsearch/binsearch.h"

CPPUNIT_TEST_SUITE_REGISTRATION(binsearchTest);

binsearchTest::binsearchTest() {
}

binsearchTest::~binsearchTest() {
}

void binsearchTest::setUp() {
}

void binsearchTest::tearDown() {
}

void binsearchTest::testItReturnsNegativeOneIfEmptyList() {
    int list[] = {};
    
    int result = binsearch<int>(42, list, 0);
    
    CPPUNIT_ASSERT(result == -1);
}

void binsearchTest::testItReturnsNegativeOneIfElementNotPresent() {
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    
    int result = binsearch<int>(42, list, 10);
    
    CPPUNIT_ASSERT(result == -1);
}

void binsearchTest::testItReturnsTheIndexOfTheElement_IfElementIsFirst() {
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    
    int result = binsearch<int>(1, list, 10);
    
    CPPUNIT_ASSERT(result == 0);
}

void binsearchTest::testItReturnsTheIndexOfTheElement_IfElementIsInTheMiddle() {
    int list[] = {1,2,3,4,5,6,7,8,9};
    
    int result = binsearch<int>(5, list, 9);
    
    CPPUNIT_ASSERT(result == 4);
}

void binsearchTest::testItReturnsTheIndexOfTheElement_IfElementIsLast() {
    int list[] = {1,2,3,4,5,6,7,8,9};
    
    int result = binsearch<int>(9, list, 9);
    
    CPPUNIT_ASSERT(result == 8);
}