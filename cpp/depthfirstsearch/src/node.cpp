#include <cstddef>
#include "node.h"

BinNode* getNewBinNode(int value)
{
  BinNode* n = new BinNode;
  n->value = value;
  n->visited = false;
  n->left = NULL;
  n->right = NULL;
  return n;
}

SquareNode* getNewSquareNode(char color)
{
  SquareNode* n = new SquareNode;
  n->visited = false;
  n->color = color;
  return n;
}
