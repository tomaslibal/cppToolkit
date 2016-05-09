#include "bttraverse.h"
#include <iostream>

void visit_node(BinNode* node)
{
  std::cout << node->value << std::endl;
}

void preorder(BinNode* root)
{
  if (root != nullptr) {
    visit_node(root);
    preorder(root->left);
    preorder(root->right);
  }
}

void inorder(BinNode* root)
{
  if (root != nullptr) {
    inorder(root->left);
    visit_node(root);
    inorder(root->right);
  }
}

void postorder(BinNode* root)
{
  if (root != nullptr) {
    postorder(root->left);
    postorder(root->right);
    visit_node(root);
  }
}
