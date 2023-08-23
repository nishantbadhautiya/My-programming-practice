# Default arguments

# def full_name(first_name = "Mohit", middle_name = "Kumar", last_name = "Badhautiya2"):
#     print(first_name, middle_name, last_name)
# full_name()




# Keyword arguments

# def full_name(first_name, last_name, middle_name):
#     print("Hello", first_name, middle_name, last_name)
# full_name(middle_name="Kumar", first_name="Nishant", last_name="Badhautiya")





# Required arguments

# def name(fname, mname, lname):
#     print("Hello,", fname, mname, lname)
# name("Peter", "Ego", "Quill")





# Variable-length arguments

# def name(*name):
#     print(type(name))
#     print("Hello", name[0], name[1], name[2])
# name("Nishant","Kumar","Badhautiya")




# Keyword Arbitrary Arguments

# def name(**name):
#     print(type(name))
#     print("Hello",name["fname"], name["mname"], name["lname"])
# name(fname = "Nishant", mname = "Kumar", lname = "Badhautiya")




# return Statement

# def name(fname, mname, lname):
#     return "Hello" + " " + fname + " " + mname + " " + lname
# print(name("Nishant", "kumar", "badhautiya"))