/*
 * File:   binsearchTest.h
 * Author: tlibal
 *
 * Created on Dec 3, 2015, 7:53:04 PM
 */

#ifndef BINSEARCHTEST_H
#define	BINSEARCHTEST_H

#include <cppunit/extensions/HelperMacros.h>

class binsearchTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(binsearchTest);

    CPPUNIT_TEST(testItReturnsNegativeOneIfEmptyList);
    CPPUNIT_TEST(testItReturnsNegativeOneIfElementNotPresent);
    CPPUNIT_TEST(testItReturnsTheIndexOfTheElement_IfElementIsInTheMiddle);
    CPPUNIT_TEST(testItReturnsTheIndexOfTheElement_IfElementIsFirst);
    CPPUNIT_TEST(testItReturnsTheIndexOfTheElement_IfElementIsLast);

    CPPUNIT_TEST_SUITE_END();

public:
    binsearchTest();
    virtual ~binsearchTest();
    void setUp();
    void tearDown();

private:
    void testItReturnsNegativeOneIfEmptyList();
    void testItReturnsNegativeOneIfElementNotPresent();
    void testItReturnsTheIndexOfTheElement_IfElementIsInTheMiddle();
    void testItReturnsTheIndexOfTheElement_IfElementIsFirst();
    void testItReturnsTheIndexOfTheElement_IfElementIsLast();
};

#endif	/* BINSEARCHTEST_H */

