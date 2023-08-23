# SET:- * These are unordered type cannot access by index, Don't store duplicate items, unchangable

info = {"Nishant", 12, True, None, 5000.09}
print(info)
print(type(info))
info.pop()  # we can modify set but cannot change
print(info)
# info[2] = "88" # Throw and error because we cannot make change in set
# print(info[3])    #throw errors cannot access element by index 
print("Printing element of \"info\" variable")
for i in info:
    print(i)