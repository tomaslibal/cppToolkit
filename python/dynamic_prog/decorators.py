def memoize(fn):
    cache = {}

    def _wrapper(*args):
        if args not in cache:
            print("cache miss for {}".format(args))
            cache[args] = fn(*args)

        return cache[args]

    _wrapper.cache = cache

    return _wrapper

