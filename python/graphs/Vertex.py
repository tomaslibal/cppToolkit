class Vertex:
    def __init__(self, value):
        self.value = value
        self.adjacent = []
        self.parent = None
        self.visited = False

    def __eq__(self, other):
        return isinstance(other, Vertex) and other.value == self.value

    def __ne__(self, other):
        return not (other == self)

    def __repr__(self):
        return "<Vertex(value={})>".format(self.value)
