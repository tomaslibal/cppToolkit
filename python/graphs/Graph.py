from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultsdict(list)

    def add_edge(self, u, v):
        self.graph[u].append(v)
