# try:
#     index = int(input("Enter the index: "))
#     l = [23,34,56,26]
#     print(l[index])
# except:
#     print("Some Error occurred")
# finally:
#     print("This will definately execute")




def func1():
    try:
        index = int(input("Enter the index: "))
        l = [23,34,56,26]
        print(l[index])
        return 1
    except:
        print("Some Error occurred")
        return 0
    finally:
        print("This will definately execute")
    # print("This will definately execute")
ans = func1()
print(ans)
