marks= int(input("enter your marks between 1 and 100 : "))
if(marks>100 or marks<0):
    print("you typed wrong marks")
elif(marks>=90):
    print("EX")
elif(marks>=80):
    print("A")
elif(marks>=70):
    print("B")
elif(marks>=60):
    print("C")
elif(marks>=50):
    print("D")
elif(marks<50):
    print("F")