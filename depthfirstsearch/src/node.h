#ifndef _NODE_H_
#def _NODE_H_

struct BinNode {
  int value;
  bool visited;

  BinNode* left;
  BinNode* right;
};

BinNode getNewBinNode(int val);

struct SquareNode {
  bool visited;
  char color;

  Node* north;
  Node* east;
  Node* south;
  Node* west;
};

Node getNewSquareNode(char color);

#endif
