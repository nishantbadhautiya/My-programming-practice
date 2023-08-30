# PUBLIC:- by default access modifier is public and can be accessed from anywhere in our program 

# class Employee:
#     def __init__(self):
#         self.name = "Nishant"
# a = Employee()
# print(a.name)




# PRIVATE:-  we create private access modifiers by __ 

# class Employee:
#     def __init__(self):
#         self.__name = "Nishant"
# a = Employee()
# print(a.__name)


# class Employee:
#     def __init__(self):
#         self.__name = "Nishant2"
# a = Employee()
# # print(a.__name)  #cannot be accessed directly
# print(a._Employee__name)   # can be accessed indirectly also known as name mangling.
# print(a.__dir__())




# PROTECTED:-

# class Student:
#     def __init__(self):
#         self._name = "Nishant"
#     def _funName(self):   #protected function
#         return "Nishant Badhautiya"
# class Subject(Student):
#     pass  #inherited class

# obj = Student()
# obj1 = Subject()
# print(dir(obj))

# #calling by object of student
# print(obj._name)
# print(obj._funName)

# #calling by object of subject class
# print(obj1._name)
# print(obj1._funName)






class A : 
    a = 10
    _b = 20
    __c = None
    print(f"a = {a} , b = {_b} , c = {__c}")
    
class B :
    def show(self):
        print(A.a)
        print(A._b)
        print(A._A__c)

obj = B()
obj.show()
