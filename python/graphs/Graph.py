class Graph:
    def __init__(self):
        self.vertices = []
        self.edges = []

    def add_edge(self, u, v):
        self.edges.append((u, v))

    def add_vertex(self, v):
        self.vertices.append(v)

    def remove_vertex(self, v):
        try:
            idx = self.vertices.index(v)
            del self.vertices[idx]
            return True
        except ValueError:
            return False

    def remove_edge(self, u, v):
        try:
            idx = self.edges.index((u, v))
            del self.edges[idx]
            return True
        except ValueError:
            return False

    def adjacent(self, u, v):
        return (u, v) in self.edges


