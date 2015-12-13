/*
 * File:   chainedHashTableTest.cpp
 * Author: tlibal
 *
 * Created on Dec 13, 2015, 2:43:48 PM
 */

#include "chainedHashTableTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(chainedHashTableTest);

chainedHashTableTest::chainedHashTableTest() {
}

chainedHashTableTest::~chainedHashTableTest() {
}

void chainedHashTableTest::setUp() {
    this->ht = new ChainedHashTable();
}

void chainedHashTableTest::tearDown() {
    delete this->ht;
}

void chainedHashTableTest::testInsert() {
    CPPUNIT_ASSERT(true);
}

void chainedHashTableTest::testSearch() {
    CPPUNIT_ASSERT(true);
}

void chainedHashTableTest::testDelete() {
    CPPUNIT_ASSERT(true);
}