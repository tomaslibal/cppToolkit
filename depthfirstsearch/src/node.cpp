#include "node.h"

BinNode* getNewBinNode(int value)
{
  BinNode* n = new BinNode;
  n->value = value;
  return n;
}
