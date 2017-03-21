#ifndef _DFS_H_
#define _DFS_H_

#include "node.h"

BinNode* dfs(BinNode* root, int search_val);

BinNode* visit_node(BinNode* node, int search_val);

namespace cpptoolkit {
    BinNode* dfs_nonrecursive(BinNode* root, int search_val);
}

#endif /* _DFS_H_ */
