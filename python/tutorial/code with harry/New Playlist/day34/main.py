info = {'name': 'Karan', 'age': 19, 'eligible': True}
print(info)
# The update() method updates the value of the key provided to it if the item already exists in the dictionary, else it creates a new key-value pair.
info.update({'age': 34, 'DOB': 2000})
print(info)


# The pop() method removes the key-value pair whose key is passed as a parameter.
info.pop('age')
print(info)


# The popitem() method removes the last key-value pair from the dictionary.
info.popitem()
print(info)


info.clear()  # The clear() method removes all the items from the list.
print(info)

# *************************************************


# info = {'name':'Karan', 'age':19, 'eligible':True, 'DOB':2003}
# del info['eligible']
# print(info)
# del info
# print(info)   #NameError: name 'info' is not defined
