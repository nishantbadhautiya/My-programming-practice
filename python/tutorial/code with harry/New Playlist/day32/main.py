# union() and update()
# The union() and update() methods prints all items that are present in the two sets. The union() method returns a new set whereas update() method adds item into the existing set from another set.

# cities1 = {"Agra", "Delhi", "Mumbai", "Jaipur"}
# cities2 = {"NewYork", "Singpore", "Tokyo", "California", "Agra"}
# # cities3 = cities1.union(cities2)
# # print(cities3)

# # print(cities1.update(cities2))  #prints None
# cities1.update(cities2)
# print(cities1)



# ******************************************************************************


# intersection and intersection_update()
# The intersection() and intersection_update() methods prints only items that are similar to both the sets. The intersection() method returns a new set whereas intersection_update() method updates into the existing set from another set.

# cities1 = {"Agra", "Delhi", "Mumbai", "Jaipur"}
# cities2 = {"NewYork", "Singpore", "Tokyo", "California", "Agra"}
# print(cities1.intersection(cities2))
# cities3 = cities1.intersection(cities2)
# print(cities3)

# print(cities1.intersection_update(cities2))  # print None
# cities1.intersection_update(cities2)
# print(cities1)



# ******************************************************************************


# symmetric_difference and symmetric_difference_update()
# The symmetric_difference() and symmetric_difference_update() methods prints only items that are not similar to both the sets. The symmetric_difference() method returns a new set whereas symmetric_difference_update() method updates into the existing set from another set

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Tokyo", "Seoul", "Kabul", "Madrid"}
# # print(cities.symmetric_difference(cities2))
# # cities3 = cities.symmetric_difference(cities2)
# # print(cities3)


# # print(cities.symmetric_difference_update(cities2))  #print None
# cities.symmetric_difference_update(cities2) 
# print(cities)


# ******************************************************************************


# difference() and difference_update()
# The difference() and difference_update() methods prints only items that are only present in the original set and not in both the sets. The difference() method returns a new set whereas difference_update() method updates into the existing set from another set.

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Tokyo", "Seoul", "Kabul", "Madrid"}
# # print(cities.difference(cities2))
# cities3 = cities.difference(cities2)
# print(cities3)

# # cities3 = cities.difference_update(cities2)  # prints None
# cities.difference_update(cities2)
# print(cities)


# ******************************************************************************

# The isdisjoint() method checks if items of given set are present in another set. This method returns False if items are present, else it returns True.
#if there is common element then return False. if there is  not common elment returns True

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Seoul", "Kabul", "Agra"}
# print(cities.isdisjoint(cities2))



# ******************************************************************************

# issubset() and issuperset() methods

# set1 = {1, 2}
# set2 = {1, 2, 3, 4}
# print(set1.issubset(set2))  # Output: True (set1 is a subset of set2)
# print(set2.issubset(set1))  # Output: False (set2 is not a subset of set1)



# set3 = {1, 2, 3, 4}
# set4 = {1, 2}
# print(set3.issuperset(set4))  # Output: True (set3 is a superset of set4)
# print(set4.issuperset(set3))  # Output: False (set4 is not a superset of set3)


# set5 = {1, 2, 3}
# print(set5.issubset(set5))  # Output: True (set5 is a subset of itself)
# print(set5.issuperset(set5))  # Output: True (set5 is a superset of itself)



# ******************************************************************************

# If you want to add a single item to the set use the add() method.

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities.add("Agra")
# print(cities)


# ******************************************************************************

# If you want to add more than one item, simply create another set or any other iterable object(list, tuple, dictionary), and use the update() method to add it into the existing set.


# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = ["Helsinki", "Warsaw", "Seoul"]
# cities.update(cities2)
# print(cities)


# ******************************************************************************

# We can use remove() and discard() methods to remove items form list.


# fruits = {"apple", "banana", "orange"}
# fruits.remove("banana")
# print(fruits)  # Output: {'apple', 'orange'}
# # fruits.remove("grape")  # Raises KeyError: 'grape' not in set


# fruits = {"apple", "banana", "orange"}
# fruits.discard("banana")
# print(fruits)  # Output: {'apple', 'orange'}
# fruits.discard("grape")  # No error, 'grape' not in set
# print(fruits)  # Output: {'apple', 'orange'}


# ******************************************************************************


# This method removes the last item of the set but the catch is that we don’t know which item gets popped as sets are unordered. However, you can access the popped item if you assign the pop() method to a variable.

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# item = cities.pop()
# print(item)
# print(cities)



# ******************************************************************************


# del is not a method, rather it is a keyword which deletes the set entirely.

# NameError: name 'cities' is not defined We get an error because our entire set has been deleted and there is no variable called cities which contains a set.
# What if we don’t want to delete the entire set, we just want to delete all items within that set?



# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# del cities
# print(cities)



# ******************************************************************************

# This method clears all items in the set and prints an empty set.

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities.clear()
# print(cities)



# ******************************************************************************


# You can also check if an item exists in the set or not.



# info = {"Carla", 19, False, 5.9}
# if "Carla" in info:
#     print("Carla is present.")
# else:
#     print("Carla is absent.")
