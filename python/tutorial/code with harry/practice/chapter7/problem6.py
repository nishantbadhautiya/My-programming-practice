from audioop import findmax


num = int(input("enter a number: "))
i = 1
factorial = 1
for i in range(1, num+1):
    factorial = factorial*i
print(factorial)
