class Node:
    data = None
    next = None

    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

    def __repr__(self):
        return "<Node(data='{}',next='{}')>".format(self.data, self.next != None)


def get_middle_element(head):
    fast = head
    slow = head

    while fast is not None and fast.next is not None:
        fast = fast.next.next
        slow = slow.next

    # if fast is not None:
    #     slow = slow.next

    return slow


def print_list(head):
    node = head
    s = ''
    while node is not None:
        s += node.data
        node = node.next
    print(s)

h = Node('A', Node('B', Node('C', Node('D', Node('E')))))
h = Node('A', Node('B', Node('C', Node('D'))))
print_list(h)
print(get_middle_element(h))
