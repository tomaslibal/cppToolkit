/*
 * File:   quicksortTest.cpp
 * Author: tlibal
 *
 * Created on Dec 20, 2015, 3:50:26 PM
 */

#include "quicksortTest.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

CPPUNIT_TEST_SUITE_REGISTRATION(quicksortTest);

quicksortTest::quicksortTest() {
}

quicksortTest::~quicksortTest() {
}

void quicksortTest::printIntArray(int* array, int len) {
    cout << "{";

    for (int i = 0; i < len; i++) {
        cout << array[i] << ", ";
    }

    cout << "}" << endl;
}

void quicksortTest::assertIntArrayEquals(int* arrayA, int* arrayB, int len)
{
    for (int i = 0; i < len; i++) {
        if (arrayA[i] != arrayB[i]) {
            CPPUNIT_FAIL("Assertion failed for IntArrayEquals");
        }
    }
}

void quicksortTest::testBasicCase() {
    int array[5] = { 4, 1, 5, 8, 7 };
    int expected[5] = { 1, 4, 5, 7, 8 };

    quicksort(array, 0, 4);
    
    assertIntArrayEquals(array, expected, 5);
}

void quicksortTest::testOrderedList() {
    int array[5] = { 1, 2, 3, 4, 5 };
    int expected[5] = { 1, 2, 3, 4, 5 };

    quicksort(array, 0, 4);

    assertIntArrayEquals(array, expected, 5);
}