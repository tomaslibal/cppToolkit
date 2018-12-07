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
    this->ht = new ChainedHashTable<int>();
}

void chainedHashTableTest::tearDown() {
    delete this->ht;
}

void chainedHashTableTest::testInsert() {
    this->ht->insert("foo", 42);
    
    CPPUNIT_ASSERT(this->ht->search("foo") == 42);
    
    this->ht->insert("bar", 420);
    
    CPPUNIT_ASSERT(this->ht->search("bar") == 420);
}

void chainedHashTableTest::testSearch() {
    CPPUNIT_ASSERT(this->ht->search("foo") == NULL);
}

void chainedHashTableTest::testDelete() {
    this->ht->insert("bar", 42);
    
    CPPUNIT_ASSERT(this->ht->search("bar") == 42);
    
    this->ht->remove("bar");
            
    CPPUNIT_ASSERT(this->ht->search("bar") == NULL);
}