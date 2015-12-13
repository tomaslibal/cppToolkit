/*
 * File:   chainedHashTableTest.h
 * Author: tlibal
 *
 * Created on Dec 13, 2015, 2:43:47 PM
 */

#ifndef CHAINEDHASHTABLETEST_H
#define	CHAINEDHASHTABLETEST_H

#include <cppunit/extensions/HelperMacros.h>

class chainedHashTableTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(chainedHashTableTest);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    chainedHashTableTest();
    virtual ~chainedHashTableTest();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* CHAINEDHASHTABLETEST_H */

