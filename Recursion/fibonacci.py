# Fibonacci number generation using the recursive function
def fibonacci(n):
    assert 0 <= n == int(n), "The number must be positive integer only!"
    if n in [0, 1]:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)


print(fibonacci(6))
