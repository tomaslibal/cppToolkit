#include "bfs.h"
#include <set>
#include <queue>

int cpptoolkit::bfs(const BinNode& root, int search_val)
{
    std::set<BinNode> visited;
    std::queue<BinNode> queue;
    
    visited.insert(root);
    queue.push(root);
    
    while(!queue.empty()) {
        auto node = queue.front();
        queue.pop();
        
        if (node.value == search_val) {
            return search_val;
        }
        
        // now add the adjacent nodes to the queue
        if (visited.find(*(node.left)) != visited.end()) {
            visited.insert(*(node.left));
            queue.push(*(node.left));
        }
        if (visited.find(*(node.right)) != visited.end()) {
            visited.insert(*(node.right));
            queue.push(*(node.right));
        }
    }
    
    return -1;
}

