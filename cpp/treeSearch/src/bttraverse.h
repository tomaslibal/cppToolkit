#include "../../depthfirstsearch/src/node.h"

/**
 * 3 methods of traversin a binary tree are given here:
 *
 * - pre-order: process current node, process left child, process right child
 * - in-order: process left child, process current node, process right child
 * - post-order: process left child, process right child, process current node
 *
 */
void preorder(BinNode* root);
void inorder(BinNode* root);
void postorder(BinNode* root);

void visit_node(BinNode* node);
