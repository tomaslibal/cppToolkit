/*
 * File:   redBlackTreeTest.h
 * Author: tlibal
 *
 * Created on Dec 20, 2015, 3:50:25 PM
 */

#ifndef REDBLACKTREETEST_H
#define	REDBLACKTREETEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/RedBlackTree.h"

class redBlackTreeTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(redBlackTreeTest);

    CPPUNIT_TEST(testVoid);

    CPPUNIT_TEST_SUITE_END();

public:
    redBlackTreeTest();
    virtual ~redBlackTreeTest();
    void setUp();
    void tearDown();

private:
    RedBlackTree* rbtree;
    void testCreateVoid();
};

#endif	/* REDBLACKTREETEST_H */

