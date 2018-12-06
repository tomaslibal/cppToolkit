def make_substrings(string):
    parts = set([string])
    i = 0

    aux = string
    len_ = len(aux)

    while len_ > 0:
        parts.add(aux)
        i = len_
        while i >= 0:
            parts.add(aux[:i])
            i -= 1
        aux = aux[1:]
        len_ -= 1

    try:
        parts.remove('')
    except KeyError:
        pass

    return parts
