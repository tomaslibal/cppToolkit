#include "bttraverseTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(bttraverseTest);

bttraverseTest::bttraverseTest() {
}

bttraverseTest::~bttraverseTest() {
}

void bttraverseTest::setUp()
{
  root = getNewBinNode(42);
  l1 = getNewBinNode(41);
  r1 = getNewBinNode(43);
  l2 = getNewBinNode(40);
  
  root->left = l1;
  root->right = r1;
  l1->left = l2;
}

void bttraverseTest::tearDown()
{
  delete root;
  delete l1;
  delete l2;
  delete r1;
}

void bttraverseTest::testPreorder()
{
  std::ostringstream oss;
  std::streambuf* obuf(std::cout.rdbuf(oss.rdbuf()));
  
  preorder(root);

  std::cout.rdbuf(obuf);

  CPPUNIT_ASSERT(oss.str() == "42\n41\n40\n43\n");
}

void bttraverseTest::testInorder()
{
  std::ostringstream oss;
  std::streambuf* obuf(std::cout.rdbuf(oss.rdbuf()));
  
  inorder(root);

  std::cout.rdbuf(obuf);

  CPPUNIT_ASSERT(oss.str() == "40\n41\n42\n43\n");
}
