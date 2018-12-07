/*
 * File:   globedistTest.h
 * Author: tlibal
 *
 * Created on March 20, 2017
 */

#ifndef _GLOBEDIST_H_
#define	_GLOBEDIST_H_

#include <cppunit/extensions/HelperMacros.h>

#include "../src/globedist.h"

class globedistTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(globedistTest);

    CPPUNIT_TEST(testKnownLocationOnEarthGivesCorrectDistance);    

    CPPUNIT_TEST_SUITE_END();

public:
    globedistTest();
    virtual ~globedistTest();
    void setUp();
    void tearDown();

private:
    void testKnownLocationOnEarthGivesCorrectDistance();
};

#endif	/* _GLOBEDIST_H_ */

