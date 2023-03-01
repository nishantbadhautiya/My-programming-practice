a = int(input("enter first number: "))
b = int(input("enter second number: "))
c = int(input("enter third number: "))
d = int(input("enter fourth number: "))
if (a > b):
    f1 = a
else:
    f1 = b

if (c > d):
    f2 = c
else:
    f2 = d

if (f1 > f2):
    print(str(f1) + " is greater")
else:
    print(str(f2) + " is greater")
