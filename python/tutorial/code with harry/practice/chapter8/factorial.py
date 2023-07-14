def factorial(n):
    product=1
    for i in range(n):
        product = product * (i+1)
    return product
print(factorial(5))