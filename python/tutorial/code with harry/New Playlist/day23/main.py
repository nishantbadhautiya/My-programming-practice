# colors = ["Orange", "Red", "Blue", "Violet", "green", "933"]
# colors.sort()
# print(colors)

# numbers = [3,63,22,133,-355]
# numbers.sort()
# print(numbers)





# colors = ["Orange", "Red", "Blue", "Violet", "green", "933"]
# colors.sort(reverse=True)  # printing the lits in descending order and don't use reverse as parameter in the function because it's build-in parameter
# print(colors)

# numbers = [3,63,22,133,-355]
# numbers.sort(reverse=True)
# print(numbers)





# colors = ["Yellow", "Red", "Green", "Orange","Pink"]
# colors.reverse()   #This method reverses the order of the list.
# print(colors)





# colors = ["Yellow", "Red", "Green", "Orange","Pink","Green"]
# print(colors.index("Green"))   #This method returns the index of the first occurrence of the list item
# num = [4,2,5,3,6,1,2,1,3,2,8,9,7]
# print(num.index(3))




# colors = ["Yellow", "Red", "Green", "Orange","Pink","Green"]
# print(colors.count("Green"))   #Returns the count of the number of items with the given value.
# num = [4,2,5,3,6,1,2,1,3,2,8,9,7]
# print(num.count(2))






# colors = ["Yellow", "Red", "Green", "Orange","Pink","Green"]
# new_colors = colors.copy()    #Returns copy of the list. This can be done to perform operations on the list without modifying the original list.
# new_colors.append("Violet")
# print(colors)
# print(new_colors)





# colors = ["violet", "indigo", "blue"]
# colors.append("red")   #This method appends items to the end of the existing list.
# print(colors)






# colors = ["violet", "indigo", "blue"]
# colors.insert(1,"yellow")   #This method inserts an item at the given index. User has to specify index and the item to be inserted within the insert() method.
# print(colors)




# colors = ["violet", "indigo", "blue"]
# rainbow = ["green", "yellow", "orange", "red"]
# colors.extend(rainbow)   #This method adds an entire list or any other collection datatype (set, tuple, dictionary) to the existing list.
# print(colors)



# Concatenating two lists
# colors = ["violet", "indigo", "blue", "green"]
# colors2 = ["yellow", "orange", "red", "blue"]
# print(colors + colors2)  #You can simply concatenate two lists to join two lists.




# color = ["Red", "Green", "Indigo", "Blue", "Violet", "Orange"]
# color.pop()   # removes last element of the list
# color.pop(2)  # removes 2nd index element of the list
# print(color)
 



color = ["Red", "Green", "Indigo", "Blue", "Violet", "Orange"]
color.remove("Blue")  # removes the element whose value if "Blue"
print(color)



