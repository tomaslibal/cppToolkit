/*
 * File:   BitflagsTest.h
 * Author: tlibal
 *
 * Created on Dec 15, 2015, 10:21:18 PM
 */

#ifndef BITFLAGSTEST_H
#define	BITFLAGSTEST_H

#include <cppunit/extensions/HelperMacros.h>

class BitflagsTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(BitflagsTest);

    CPPUNIT_TEST(testIs_flag_set);
    CPPUNIT_TEST(testIs_flag_set_bool);
    CPPUNIT_TEST(testSet_flag);
    CPPUNIT_TEST(testUnset_flag);

    CPPUNIT_TEST_SUITE_END();

public:
    BitflagsTest();
    virtual ~BitflagsTest();
    void setUp();
    void tearDown();

private:
    short settings;
    void testIs_flag_set();
    void testIs_flag_set_bool();
    void testSet_flag();
    void testUnset_flag();

};

#endif	/* BITFLAGSTEST_H */

