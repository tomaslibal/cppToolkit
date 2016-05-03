#include <cstddef>
#include <vector>

#include "dfs.h"
#include "node.h"

BinNode* dfs(BinNode* root, int search_val)
{
  std::vector<int> visited;
  
  return visit_node(root, search_val);
}

bool contains_element(std::vector<int>& vec, int lookup)
{
  auto first = vec.begin();
  auto last = vec.end();
  
  while (first!=last) {
    if (*first==lookup) return true;
    ++first;
  }
  return false;
}

BinNode* visit_node(BinNode* node, int search_val)
{
  if (node == NULL) return NULL;
  
  if (node->visited) return NULL;
  else node->visited = true;

  if (node->value == search_val) return node;
  
  BinNode* l = visit_node(node->left, search_val);
  BinNode* r = visit_node(node->right, search_val);
  
  if (l != NULL) return l;
  return r;
}
