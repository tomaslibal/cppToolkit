from primes.least_factor import least_factor


def prime_factorize(n):
    factors = []
    i = n
    while i > 1:
        factors.append(least_factor(i))
        i = i / factors[-1]
    return factors
