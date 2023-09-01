# Magic/Dunder Methods in Python

# class Employee:
#     name = "Harry"
#     def __len__(self):
#         i = 0
#         for c in self.name:
#             i = i+ 1
#         return i

# e = Employee()
# print(e.name)
# print(len(e))




# fallback in repr when object don't gets any str 

from emp import Employee
e = Employee("Harry")
# print(e)
print(str(e))
print(repr(e))
e()

# e2 = Employee("Nishant")
# print(e2)

# print(e.name)
# print(len(e))
