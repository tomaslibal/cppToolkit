def make_substrings(string):
    parts = [string]
    i = 0

    parts.extend(list(set([i for i in string])))

    aux = string

    while len(aux) > 0:
        parts.append(aux)
        i = len(aux)
        while i >= 0:
            parts.append(aux[:i])
            i -= 1
        aux = aux[1:]

    return list(filter(lambda x: x != '', set(parts)))
