def is_valid_parens(s):
    open_chars = "([{<"
    close_chars = ")]}>"
    stack = []

    for c in s:
        if c in open_chars:
            stack.append(c)
        elif c in close_chars:
            ic = open_chars[close_chars.index(c)]
            try:
                x = stack.pop()
            except IndexError:
                return False
            if x != ic:
                return False
        else:
            return False

    return len(stack) == 0


assert True is is_valid_parens("{()}{()}")
assert False is is_valid_parens("{(()}")
assert False is is_valid_parens("}")
assert True is is_valid_parens("")
assert True is is_valid_parens("()")
assert True is is_valid_parens("<>")
assert False is is_valid_parens("ab")
assert True is is_valid_parens("<>()")
assert False is is_valid_parens("<<))")
