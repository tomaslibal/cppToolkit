/*
 * File:   dfsTest.h
 * Author: tlibal
 *
 * Created on May 2, 2016, 09:11:00 AM
 */

#ifndef _DFSTEST_H_
#define	_DFSTEST_H_

#include <cppunit/extensions/HelperMacros.h>

#include "../src/dfs.h"

class dfsTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(dfsTest);

    CPPUNIT_TEST(testCreateBinNode);
    CPPUNIT_TEST(testDFSReturnsNullIfValueNotPresent);
    CPPUNIT_TEST(testDFSReturnsTheNodeIfValuePresent);

    CPPUNIT_TEST_SUITE_END();

public:
    dfsTest();
    virtual ~dfsTest();
    void setUp();
    void tearDown();

private:
    void testCreateBinNode();
    void testDFSReturnsNullIfValueNotPresent();
    void testDFSReturnsTheNodeIfValuePresent();
};

#endif	/* _DFSTEST_H_ */

