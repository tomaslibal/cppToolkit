from queue import Queue


def bfs(root, search_val):
    q = Queue()
    q.put(root)

    while not q.empty():
        v = q.get()
        if v.value == search_val:
            return v

        v.visited = True

        for adjacent in v.adjacent:
            if not adjacent.visited:
                q.put(adjacent)


