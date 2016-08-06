/*
 * File:   quicksortTest.h
 * Author: tlibal
 *
 * Created on Dec 20, 2015, 3:50:25 PM
 */

#ifndef QUICKSORTTEST_H
#define	QUICKSORTTEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/quicksort.h"

class quicksortTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(quicksortTest);

    CPPUNIT_TEST(testBasicCase);

    CPPUNIT_TEST_SUITE_END();

public:
    quicksortTest();
    virtual ~quicksortTest();

private: 
    void testBasicCase();
    void testOrderedList();

    void printIntArray(int* array, int len);

    void assertIntArrayEquals(int* arrayA, int* arrayB, int len);
};

#endif	/* QUICKSORTTEST_H */

