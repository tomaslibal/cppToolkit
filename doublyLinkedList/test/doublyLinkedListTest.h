/*
 * File:   doublyLinkedListTest.h
 * Author: tlibal
 *
 * Created on Dec 20, 2015, 3:50:25 PM
 */

#ifndef DOUBLYLINKEDLISTTEST_H
#define	DOUBLYLINKEDLISTTEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/DoublyLinkedList.h"

class doublyLinkedListTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(doublyLinkedListTest);

    CPPUNIT_TEST(testCreateNode);
    CPPUNIT_TEST(testInsert);
    CPPUNIT_TEST(testSearch);
    CPPUNIT_TEST(testRemove);
    CPPUNIT_TEST(testSum);

    CPPUNIT_TEST_SUITE_END();

public:
    doublyLinkedListTest();
    virtual ~doublyLinkedListTest();
    void setUp();
    void tearDown();

private:
    DoublyLinkedList<int>* list;
    void testCreateNode();
    void testInsert();
    void testSearch();
    void testRemove();
    void testSum();
};

#endif	/* DOUBLYLINKEDLISTTEST_H */

