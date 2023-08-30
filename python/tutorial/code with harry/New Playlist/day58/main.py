# *************** CONSTRUCTOR ********************

# class Person:
#     def __init__(self, name, occupation):
#         print("This is a constructor")
#         self.name = name
#         self.occupation = occupation
#     def info(self):
#         print(f"{self.name} is a {self.occupation}")
    
# a = Person("Nishant", "Developer")
# print(a.name)
# print(a.occupation)
# a.info()

# b = Person("Rahul", "HR")
# print(b.name)
# print(b.occupation)
# b.info()






# *************** DEFAULT CONSTRUCTOR ********************

class Person:
    def __init__(self, name = "Rahul", occupation = "Developer"):
        print("This is a constructor")
        self.name = name
        self.occupation = occupation
    def info(self):
        print(f"{self.name} is a {self.occupation}")
    
a = Person()
print(a.name)
print(a.occupation)
a.info()
