# Class Methods as Alternative Constructors

# class Employee:
#     def __init__(self, name, salary):
#         self.name = name 
#         self.salary = salary

# e1 = Employee("Harry", 12000)
# print(e1.name)
# print(e1.salary)

# string = "Nishant-15000"
# e2 = Employee(string.split("-")[0], int(string.split("-")[1]))
# print(e2.name)
# print(e2.salary)





# class Employee:
#     def __init__(self, name, salary):
#         self.name = name 
#         self.salary = salary
#     @classmethod
#     def fromStr(cls, string):
#         return cls(string.split("-")[0], int(string.split("-")[1]))

# e1 = Employee("Harry", 12000)
# print(e1.name)
# print(e1.salary)

# string = "Nishant-15000"
# e2 = Employee.fromStr(string)
# print(e2.name)
# print(e2.salary)





# class Person:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     @classmethod
#     def from_string(cls, string):
#         name, age = string.split(',')
#         return cls(name, int(age))

# person = Person.from_string("John Doe, 30")
# print(person.name, person.age)





class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height
    @classmethod
    def square(cls, size):
        return cls(size, size)


rectangle = Rectangle.square(10)
print(rectangle.width)
print(rectangle.height)
