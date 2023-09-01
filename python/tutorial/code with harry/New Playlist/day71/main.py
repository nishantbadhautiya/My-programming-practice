# dir() method:- returns a list of all the attributes and methods (including dunder methods means those methods which have __xyz__ like structure ) available for an object


# x = [1, 2, 3]
# print(dir(x))
# print(x.__add__)
# print(x.__str__)



# x = (1, 2, 3)
# print(dir(x))
# print(x.__addd__)


# __dict__ attribute: The __dict__ attribute returns a dictionary representation of an object's attributes. It is a useful tool for introspection


class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        self.version = 9.2
p = Person("John", 30)
print(p.__dict__)


# The help() function is used to get help documentation for an object, including a description of its attributes and methods

print(help(str))
print(help(Person))

