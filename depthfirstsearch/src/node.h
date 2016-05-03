#ifndef _NODE_H_
#define _NODE_H_

struct BinNode {
  int value;
  bool visited;

  BinNode* left;
  BinNode* right;
};

BinNode* getNewBinNode(int val);

struct SquareNode {
  bool visited;
  char color;

  SquareNode* north;
  SquareNode* east;
  SquareNode* south;
  SquareNode* west;
};

SquareNode* getNewSquareNode(char color);

#endif
