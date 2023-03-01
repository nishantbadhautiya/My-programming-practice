def greatest(num1, num2, num3):
    if(num1>num2):
        f1 = num1
    else:
        f1 = num2
    if(f1>num2):
        return f1
    else:
        return num2
print(greatest(67,34,52))