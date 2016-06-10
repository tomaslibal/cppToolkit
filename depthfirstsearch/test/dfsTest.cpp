#include "dfsTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(dfsTest);

dfsTest::dfsTest() {
}

dfsTest::~dfsTest() {
}

void dfsTest::setUp()
{
  root = getNewBinNode(42);
  l1 = getNewBinNode(41);
  r1 = getNewBinNode(43);
  l2 = getNewBinNode(40);
  
  root->left = l1;
  root->right = r1;
  l1->left = l2;
}

void dfsTest::tearDown()
{
  delete root;
  delete l1;
  delete l2;
  delete r1;
}

void dfsTest::testCreateBinNode()
{
  BinNode* n = getNewBinNode(42);

  CPPUNIT_ASSERT(n->value == 42);

  delete n;
}

void dfsTest::testDFSReturnsNullIfValueNotPresent()
{
  BinNode* res = dfs(root, 1);
  
  CPPUNIT_ASSERT(res == NULL);
}

void dfsTest::testDFSReturnsTheNodeIfValuePresent()
{
  BinNode* res = dfs(root, 40);
  
  CPPUNIT_ASSERT(res == l2);
}

void dfsTest::testDFSMarksVisitedNodesAsVisited()
{
  BinNode* res = dfs(root, 40);
  
  CPPUNIT_ASSERT(root->visited == true);
  CPPUNIT_ASSERT(l1->visited == true);
  CPPUNIT_ASSERT(r1->visited == true);
  CPPUNIT_ASSERT(l2->visited == true);
}

void dfsTest::testNewBinNodeIsMarkedUnvisited()
{
  CPPUNIT_ASSERT(root->visited == false);
}

void dfsTest::testSquareNodePartitionProblem()
{

}
