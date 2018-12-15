from graphs.Vertex import BinaryVertex


def lca(root: BinaryVertex, c1: BinaryVertex, c2: BinaryVertex) -> BinaryVertex:
    """
    Finds the lowest common ancestor (LCA) node in a binary tree given by its
    root node and two children for which we lookup their LCA.
    """

    if root is None:
        return None

    if root.value == c1.value or root.value == c2.value:
        return root

    left = lca(root.left, c1, c2)
    right = lca(root.right, c1, c2)

    if left and right:
        return root

    return left if left is not None else right

