#Enumerate function in python


# marks = [23,43,66,20,90,29,33]
# index = 0
# for mark in marks:
#     print(mark)
#     if index == 3:
#         print("At index no. 3")
#     index = index + 1




# marks = [23,43,66,20,90,29,33]
# for index, mark in enumerate(marks):
#     print(mark)
#     if index == 3:
#         print("At index no. 3")





# marks = [23,43,66,20,90,29,33]
# for v in enumerate(marks):
#     print(v)   # print tuple of two element with index and their corresponding values





marks = [23,43,66,20,90,29,33]
for index, mark in enumerate(marks, start=2):
    print(mark)
    if index == 3:
        print("At index no. 3")
