def f(x):
    if x > 0:
        return x ** f(x-1)
    return x

# 5 - Big number

print(f(6))