def dfs(root, search_val):
    return visit_node(root, search_val)


def visit_node(node, search_val):
    if node is None or node.visited:
        return None

    node.visited = True

    if node.value == search_val:
        return node

    for adjacent in node.adjacent:
        check = visit_node(adjacent, search_val)
        if check is not None:
            return check

    return None
