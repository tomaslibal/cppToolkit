#include "dfsTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(dfsTest);

dfsTest::dfsTest() {
}

dfsTest::~dfsTest() {
}

void dfsTest::setUp() {
  //
}

void dfsTest::tearDown() {
  
}

void dfsTest::testCreateBinNode() {
  BinNode* n = getNewBinNode(42);
  
  CPPUNIT_ASSERT(n->value == 42);
}
