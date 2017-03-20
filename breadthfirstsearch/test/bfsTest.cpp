#include "bfsTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(bfsTest);

bfsTest::bfsTest() {
}

bfsTest::~bfsTest() {
}

void bfsTest::setUp()
{
  root = getNewBinNode(42);
  l1 = getNewBinNode(41);
  r1 = getNewBinNode(43);
  l2 = getNewBinNode(40);
  
  root->left = l1;
  root->right = r1;
  l1->left = l2;
}

void bfsTest::tearDown()
{
  delete root;
  delete l1;
  delete l2;
  delete r1;
}

void bfsTest::testBFSReturnsNegativeOneIfNotFound ()
{
    int result = cpptoolkit::bfs(*root, 1337);
    
    CPPUNIT_ASSERT(result == -1);
}
