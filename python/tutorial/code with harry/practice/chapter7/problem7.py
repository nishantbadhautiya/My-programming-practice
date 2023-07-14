num = int(input("enter a number:  "))
# for i in range(1,6,2):
#     for j in range (0,i):
#         print("*")
n = num
for i in range(num):
    print(" " * (n-i-1), end="")
    print("*" * (2*i+1), end="")
    print(" " * (n-i-1))
