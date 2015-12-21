/*
 * File:   linkedListTest.h
 * Author: tlibal
 *
 * Created on Nov 20, 2015, 10:13:59 PM
 */

#ifndef LINKEDLISTTEST_H
#define	LINKEDLISTTEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/SimpleLinkedList.h"

class linkedListTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(linkedListTest);

    CPPUNIT_TEST(testItInitializesWithFirstNodeNULL);
    CPPUNIT_TEST(testAddNodeAddsNewNode);
    CPPUNIT_TEST(testGetLengthReturnsNumOfNodes);
    CPPUNIT_TEST(testRemoveNodeRemovesNodes);
    CPPUNIT_TEST(testGetAtIndexReturnsNodeAtGivenIndex);
    CPPUNIT_TEST(testGetAtIndexReturnsNullIfIndexOutOfBounds);
    CPPUNIT_TEST(testGetNodeByValue);
    CPPUNIT_TEST(testGetNodeByKey);
    CPPUNIT_TEST(testGetNodeByKeyValue);
    CPPUNIT_TEST(testSum);
    CPPUNIT_TEST(testSetKey);

    CPPUNIT_TEST_SUITE_END();

public:
    
    linkedListTest();
    virtual ~linkedListTest();
    void setUp();
    void tearDown();

private:
    SimpleLinkedList<int>* list;
    void testItInitializesWithFirstNodeNULL();
    void testAddNodeAddsNewNode();
    void testGetLengthReturnsNumOfNodes();
    void testRemoveNodeRemovesNodes();
    void testGetAtIndexReturnsNodeAtGivenIndex();
    void testGetAtIndexReturnsNullIfIndexOutOfBounds();
    void testGetNodeByValue();
    void testGetNodeByKey();
    void testGetNodeByKeyValue();
    void testSum();
    void testSetKey();
};

#endif	/* LINKEDLISTTEST_H */

