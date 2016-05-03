#include <cstddef>
#include "dfs.h"
#include "node.h"

BinNode* dfs(BinNode* root, int search_val)
{
  return NULL;
}

void visit_node(BinNode* node)
{
  if (node->visited) return;
  else node->visited = true;

}
