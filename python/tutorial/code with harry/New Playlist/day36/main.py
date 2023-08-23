
# a = input("Enter the number: ")
# print("Multiplication table of ", a , "is: ")
# try:
#     for i in range(1,11):
#         print(f"{int(a)} X {i} = {int(a)*i}")
# except Exception as error:
#     print(error)
# print("Very Important line of code must to be executed")




# a = input("Enter the number: ")
# print("Multiplication table of ", a , "is: ")
# try:
#     for i in range(1,11):
#         print(f"{int(a)} X {i} = {int(a)*i}")
# except:
#     print("Invalid Input")
# print("Very Important line of code must to be executed")




try:
    a = int(input("Enter the number:"))
    print("You entered ", a)
    list1 = [34, 53, 66]
    print(list1[a])
except ValueError:
    print("You Entered the Wrong input")
except IndexError:
    print("Index Error")
