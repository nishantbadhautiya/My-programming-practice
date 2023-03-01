def sum(num):
    if(num==1):
        return 1
    else:
        total= 0
        total= num+sum(num-1)
        return total
num = int(input("enter the number:  "))
print("total sum of first "+str(num)+ " natural number is "+str(sum(num)))

