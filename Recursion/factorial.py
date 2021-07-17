def factorial(n):
    # Step 3 
    assert n >=0 and int(n) == n, "The number must be positive integer only!"
    # Step 2
    if n in [0,1]:
        return 1
    # Step 1
    return n * factorial(n-1)

print(factorial(-1))