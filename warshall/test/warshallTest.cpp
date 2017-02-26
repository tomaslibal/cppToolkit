/*
 * File:   warshallTest.cpp
 * Author: tlibal
 *
 * Created on Feb 26, 2017
 */

#include "../../graph/src/adjm.h"
#include "warshallTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(warshallTest);

warshallTest::warshallTest() {
}

warshallTest::~warshallTest() {
}

void warshallTest::setUp() {
    
}

void warshallTest::tearDown() {
    
}

void warshallTest::basicTest() {
    
    cpptoolkit::adjm mat1(4);
    mat1.copyRow(0, std::vector<int>{0, 1, 0, 0});
    mat1.copyRow(1, std::vector<int>{0, 0, 1, 0});
    mat1.copyRow(2, std::vector<int>{0, 0, 0, 1});
    mat1.copyRow(3, std::vector<int>{0, 1, 0, 0});
    
    cpptoolkit::adjm expected(4);
    expected.copyRow(0, std::vector<int>{1, 1, 1, 1});
    expected.copyRow(1, std::vector<int>{0, 1, 1, 1});
    expected.copyRow(2, std::vector<int>{0, 1, 1, 1});
    expected.copyRow(3, std::vector<int>{0, 1, 1, 1});

    cpptoolkit::warshall(mat1.matrix, 4);
    
    CPPUNIT_ASSERT(true == cmpAdjacencyMatrices(mat1.matrix, expected.matrix, 4));
}

bool warshallTest::cmpAdjacencyMatrices(int ** adj1, int ** adj2, int m)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (adj1[i][j] != adj2[i][j]) {
                return false;
            }
        }
    }
    return true;
}
