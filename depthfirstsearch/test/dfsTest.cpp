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

  delete n;
}

void dfsTest::testDFSReturnsNullIfValueNotPresent() {
  BinNode* root = getNewBinNode(42);
  BinNode* l1 = getNewBinNode(41);
  BinNode* r1 = getNewBinNode(43);
  BinNode* l2 = getNewBinNode(40);
  
  root->left = l1;
  root->right = r1;
  l1->left = l2;
  
  BinNode* res = dfs(root, 1);
  
  CPPUNIT_ASSERT(res == NULL);
  
  delete root;
  delete l1;
  delete l2;
  delete r1;
}

void dfsTest::testDFSReturnsTheNodeIfValuePresent() {
  BinNode* root = getNewBinNode(42);
  BinNode* l1 = getNewBinNode(41);
  BinNode* r1 = getNewBinNode(43);
  BinNode* l2 = getNewBinNode(40);
  
  root->left = l1;
  root->right = r1;
  l1->left = l2;
  
  BinNode* res = dfs(root, 40);
  
  CPPUNIT_ASSERT(res == l2);
  
  delete root;
  delete l1;
  delete l2;
  delete r1;
}
