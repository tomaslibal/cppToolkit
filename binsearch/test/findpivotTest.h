/*
 * File:   findpivotTest.h
 * Author: tlibal
 */

#ifndef FINDPIVOTTEST_H
#define	FINDPIVOTTEST_H

#include <cppunit/extensions/HelperMacros.h>

class findpivotTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(findpivotTest);

    CPPUNIT_TEST(testNonPartitionedArrayReturnsZero);
    CPPUNIT_TEST(testPartitionedArrayFindsPivot);
    CPPUNIT_TEST(testReturnsNegativeOneIfArrayEmpty);

    CPPUNIT_TEST_SUITE_END();

public:
    findpivotTest();
    virtual ~findpivotTest();
    void setUp();
    void tearDown();

private:
    void testNonPartitionedArrayReturnsZero();
    void testPartitionedArrayFindsPivot();
    void testReturnsNegativeOneIfArrayEmpty();

};

#endif	/* FINDPIVOTTEST_H */

