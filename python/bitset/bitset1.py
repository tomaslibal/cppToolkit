import time
import random
from bitarray import bitarray


class Foo:
    bar = ''
    minky = False

    def __init__(self, bar='', minky=False):
        self.bar = bar
        self.minky = minky


def get_random():
    #random.seed(42)
    f = Foo()
    if random.random() > 0.75:
        f.bar = 'baz'
    if random.random() > 0.90:
        f.minky = True
    return f


objs = [get_random() for x in range(128)]

a = bitarray(len(objs))
a.setall(True)

bar_baz = bitarray("".join(['1' if x.bar == 'baz' else '0' for x in objs]))
minky_true = bitarray("".join(['1' if x.minky is True else '0' for x in objs]))

t = time.time()
filtered = a & bar_baz & minky_true
e = time.time()
print("{:.6}ms".format((e-t) * 1000))

t = time.time()
filtered2 = list(filter(lambda x: x.bar == 'baz' and x.minky is True, objs))
e = time.time()
print("{:.6}ms".format((e-t) * 1000))



