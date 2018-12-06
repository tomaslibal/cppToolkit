def num_occur(string, substr):
    #KMP from Cormen's book, modified for 0-indexed arrays
    cnt = 0
    n = len(string)
    m = len(substr)
    pi = compute_prefix_fn(substr)
    q = 0
    for i in range(n):
        while q > 0 and substr[q] != string[i]:
            q = pi[q-1]
        if substr[q] == string[i]:
            q += 1
        if q == m:
            cnt += 1
            q = pi[q-1]
    return cnt

def compute_prefix_fn(p):
    m = len(p)
    pi = [None for i in range(m)]
    pi[0] = 0
    k = 0
    for q in range(1, m):
        while k > 0 and p[k] != p[q]:
            k = pi[k]
        if p[k] == p[q]:
            k += 1
        pi[q] = k
    return pi
