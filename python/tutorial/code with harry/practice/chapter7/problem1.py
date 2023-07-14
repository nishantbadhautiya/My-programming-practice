num = int(input("enter a number: "))
# for i in range(1, 11):
# print(str(num) + "*" + str(i) +"=" +str(num*i))
i = 10
while (i <= 10):
    print(f"{num} * {i}  =  {num*i}")
    i = i-1
    if (i == 0):
        break
