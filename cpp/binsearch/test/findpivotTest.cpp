/*
 * File:   findpivotTest.cpp
 * Author: tlibal
 *
 * Created on Dec 3, 2015, 7:53:04 PM
 */

#include "findpivotTest.h"
#include <iostream>

#include "../src/findpivot.h"

CPPUNIT_TEST_SUITE_REGISTRATION(findpivotTest);

findpivotTest::findpivotTest() {
}

findpivotTest::~findpivotTest() {
}

void findpivotTest::setUp() {
}

void findpivotTest::tearDown() {
}

void findpivotTest::testNonPartitionedArrayReturnsZero()
{
    int* arr = (int*) malloc(sizeof(int)*4);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    
    int result = cpptoolkit::findpivot(arr, 4);
    
    CPPUNIT_ASSERT(result == 0);
    
    free(arr);
}

void findpivotTest::testPartitionedArrayFindsPivot()
{
    int* arr = (int*) malloc(sizeof(int)*6);
    arr[0] = 6;
    arr[1] = 7;
    arr[2] = 8;
    arr[3] = 9;
    arr[4] = 1;
    arr[5] = 2;
    
    int result = cpptoolkit::findpivot(arr, 6);
    
    CPPUNIT_ASSERT(result == 4);
    
    free(arr);
}

void findpivotTest::testReturnsNegativeOneIfArrayEmpty()
{
    int* arr = nullptr;
    
    int result = cpptoolkit::findpivot(arr, 0);
    
    CPPUNIT_ASSERT(result == -1);
}

