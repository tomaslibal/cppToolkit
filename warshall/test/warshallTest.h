/*
 * File:   warshallTest.h
 * Author: tlibal
 *
 * Created on Feb 26, 2017
 */

#ifndef warshallTest_H
#define	warshallTest_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/warshall.h"

class warshallTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(warshallTest);

    CPPUNIT_TEST(basicTest);

    CPPUNIT_TEST_SUITE_END();

public:
    warshallTest();
    virtual ~warshallTest();
    void setUp();
    void tearDown();

private:    
    void basicTest();   
    
    bool cmpAdjacencyMatrices(int** adj1, int** adj2, int m);
};

#endif	/* warshallTest_H */

