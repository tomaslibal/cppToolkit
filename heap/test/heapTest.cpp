/*
 * File:   heapTest.cpp
 * Author: tlibal
 *
 * Created on Dec 28, 2016, 5:17:20 PM
 */

#include "heapTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(heapTest);

heapTest::heapTest() {
}

heapTest::~heapTest() {
}

void heapTest::setUp() {

}

void heapTest::tearDown() {

}

void heapTest::testLen() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    HeapArray a (vec);

    CPPUNIT_ASSERT_MESSAGE("HeapArray.len should be 3", 3 == a.len);
}
