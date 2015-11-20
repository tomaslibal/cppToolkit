/*
 * File:   linkedListTest.h
 * Author: tlibal
 *
 * Created on Nov 20, 2015, 10:13:59 PM
 */

#ifndef LINKEDLISTTEST_H
#define	LINKEDLISTTEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/LinkedList.h"

class linkedListTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(linkedListTest);

    CPPUNIT_TEST(testItInitializesWithFirstNodeAllocated);
    CPPUNIT_TEST(testItInitializesWithLastNodeNull);
    CPPUNIT_TEST(testAddNodeAddsNewNode);
    CPPUNIT_TEST(testGetLengthReturnsNumOfNodes);

    CPPUNIT_TEST_SUITE_END();

public:
    
    linkedListTest();
    virtual ~linkedListTest();
    void setUp();
    void tearDown();

private:
    void testItInitializesWithFirstNodeAllocated();
    void testItInitializesWithLastNodeNull();
    void testAddNodeAddsNewNode();
    void testGetLengthReturnsNumOfNodes();
};

#endif	/* LINKEDLISTTEST_H */

