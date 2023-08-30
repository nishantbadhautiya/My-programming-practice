# *****************  MAP  ************************

# def cube(x):
#     return x * x * x
# print (cube(2))


# l = [1,2,4,6,9,3]
# new_list = []
# for item in l:
#     new_list.append(cube(item))
# print(new_list)


# def cube(x):
#     return x * x * x
# l = [1,2,4,6,9,3]
# new_list = list(map(cube,l))
# print(new_list)


# # List of numbers
# numbers = [1, 2, 3, 4, 5]
# # Double each number using the map function
# doubled = map(lambda x: x * 2, numbers)
# # Print the doubled numbers
# print(list(doubled))


# *****************  FILTER  ************************

# l = [1,2,4,6,9,3]
# def filter_function(a):
#     return a > 4
# new_list = filter(filter_function, l)
# print(list(new_list))


# # List of numbers
# numbers = [1, 2, 3, 4, 5]
# # Get only the even numbers using the filter function
# evens = filter(lambda x: x % 2 == 0, numbers)
# # Print the even numbers
# print(list(evens))


# *****************  REDUCE  ************************


# from functools import reduce
# # List of numbers
# numbers = [1, 2, 3, 4, 5]
# # Calculate the sum of the numbers using the reduce function
# sum = reduce(lambda x, y: x + y, numbers)
# # Print the sum
# print(sum)


from functools import reduce
l = [1, 3, 5, 2, 7, 8, 3]
ans = reduce(lambda x,y: x + y, l)
print(ans)
