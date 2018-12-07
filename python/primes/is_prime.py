from primes.least_factor import least_factor


def is_prime(x):
    if x < 2:
        return False

    return x == least_factor(x)
