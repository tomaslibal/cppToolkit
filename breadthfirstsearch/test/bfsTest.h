/*
 * File:   bfsTest.h
 * Author: tlibal
 *
 * Created on March 20, 2017
 */

#ifndef _BFSTEST_H_
#define	_BFSTEST_H_

#include <cppunit/extensions/HelperMacros.h>

#include "../src/bfs.h"

class bfsTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(bfsTest);

    CPPUNIT_TEST(testBFSReturnsNegativeOneIfNotFound);    

    CPPUNIT_TEST_SUITE_END();

public:
    bfsTest();
    virtual ~bfsTest();
    void setUp();
    void tearDown();

private:
    BinNode* root = nullptr;
    BinNode* l1 = nullptr;
    BinNode* r1 = nullptr;
    BinNode* l2 = nullptr;
      
    void 
  testBFSReturnsNegativeOneIfNotFound ();
};

#endif	/* _BFSTEST_H_ */

