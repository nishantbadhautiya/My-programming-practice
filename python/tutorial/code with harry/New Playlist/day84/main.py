# time module in python helps to do time-related operations
import time

# def usingWhile():
#     i = 0
#     while i < 5000:
#         i = i + 1
#         print(i)

# def usingFor():
#     for i in range(5000):
#         print(i)

# init = time.time()
# usingFor()
# t1 = time.time() - init
# init = time.time()
# usingWhile()
# t2 = time.time() - init
# print(t1)
# print(t2)






# print(4)
# time.sleep(3) # wait for 3 second
# print("This is printed after 3 seconds")






t = time.localtime()
formatted_time = time.strftime("%Y-%m-%d %H:%M:%S", t)

print(formatted_time)
# Output: 2022-11-08 08:45:33