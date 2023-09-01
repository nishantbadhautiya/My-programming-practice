# SUPER keyword used to call parent class using child class

# class ParentClass:
#     def parent_method(self):
#         print("This is the parent method.")
# class ChildClass(ParentClass):
#     # def parent_method(self):
#     #     print("Harry")
#     #     super().parent_method()
#     def child_method(self):
#         print("This is the child method.")
#         super().parent_method()
# child_object = ChildClass()
# child_object.child_method()
# child_object.parent_method()





class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id
class Programmer(Employee):
    def __init__(self, name, id , lang):
        super().__init__(name,id)
        self.lang = lang 

rohan = Employee("Rohan Das", "344")
harry = Programmer("Harry", "2345", "Python")
print(harry.name)
print(harry.id)
print(harry.lang)
