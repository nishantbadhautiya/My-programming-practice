num = int(input("enter a number:  "))
prime = True
for i in range(2, num):
    if (num % i == 0):
        prime = False
        break
if prime:
    print(str(num) + " is a prime number ")
else:
    print(str(num) + " is not a prime number ")
