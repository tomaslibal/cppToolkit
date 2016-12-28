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

void heapTest::testFoo() {
    CPPUNIT_ASSERT_MESSAGE("foo", 42 == 42);
}
