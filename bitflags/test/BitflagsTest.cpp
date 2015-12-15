/*
 * File:   BitflagsTest.cpp
 * Author: tlibal
 *
 * Created on Dec 15, 2015, 10:21:20 PM
 */

#include "BitflagsTest.h"
#include "../src/bitflags.h"


CPPUNIT_TEST_SUITE_REGISTRATION(BitflagsTest);

BitflagsTest::BitflagsTest() {
}

BitflagsTest::~BitflagsTest() {
}

void BitflagsTest::setUp() {
    this->settings = 0;
}

void BitflagsTest::tearDown() {
}

void BitflagsTest::testIs_flag_set() {
    
    this->settings |= FLAG_1;
    
    CPPUNIT_ASSERT(is_flag_set(this->settings, FLAG_1) == FLAG_1);
    CPPUNIT_ASSERT(is_flag_set(this->settings, FLAG_2) == 0);
    
    this->settings |= FLAG_2;
    
    CPPUNIT_ASSERT(is_flag_set(this->settings, FLAG_2) == FLAG_2);
}

void BitflagsTest::testIs_flag_set_bool() {
    
    this->settings |= FLAG_3;
    this->settings |= FLAG_4;
    
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_1) == false);
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_2) == false);
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_3) == true);
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_4) == true);
}

void BitflagsTest::testSet_flag() {
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_1) == false);
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_2) == false);
    
    set_flag(&this->settings, FLAG_1);
    
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_1) == true);
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_2) == false);
    
}

void BitflagsTest::testUnset_flag() {
    set_flag(&this->settings, FLAG_1);
    set_flag(&this->settings, FLAG_4);
    
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_1) == true);
    
    unset_flag(&this->settings, FLAG_1);
    
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_1) == false);
    CPPUNIT_ASSERT(is_flag_set_bool(this->settings, FLAG_4) == true);
}

