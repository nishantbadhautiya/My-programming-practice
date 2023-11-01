# 60, 62, 71, 72,


class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
    @classmethod
    def fromStr(cls, str):
        return cls(str.split("-")[0], int(str.split("-")[1]))

obj1 = Employee("Nishant", 2000)
print(obj1.name)
print(obj1.salary)

string = "Rahul-2300"
obj1.fromStr(string)

print(obj1.name)
print(obj1.salary)
