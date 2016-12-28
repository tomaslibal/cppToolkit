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
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    heap = new HeapArray(vec);
}

void heapTest::tearDown() {
    delete heap;
}

void heapTest::testLen() {
    CPPUNIT_ASSERT_MESSAGE("HeapArray.len should be 3", 3 == heap->len);
}

void heapTest::testParentIdx()
{
    CPPUNIT_ASSERT_MESSAGE("parent index should be floor(i / 2)", 2 == heap->getParentIdx(5));
}

void heapTest::testLeftIdx()
{
    CPPUNIT_ASSERT_MESSAGE("left child index should be 2*i", 10 == heap->getLeftChildIdx(5));
}

void heapTest::testRightIdx()
{
    CPPUNIT_ASSERT_MESSAGE("right child should be 2*i + 1", 11 == heap->getRightChildIdx(5));
}
