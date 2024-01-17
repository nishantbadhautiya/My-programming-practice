# class Student:
#     __name = "Ravi"

# obj = Student()
# print(obj.__name)


# ******************************************************************

# class Student:
#     __name = "Ravi"
#     def __init__(self):
#         print(self.__name)
#         self.__display_info()

#     def __display_info(self):
#         print("Welcome to WSCubeTech")
# obj = Student()
# # print(obj.__name)
# # obj.__display_info()


# ******************************************************************


# class MyClass:
#     def __init__(self, value):
#         self._value = value

#     def show(self):
#         print(f"Value is: {self._value}")

#     @property
#     def ten_value(self):      # getter function
#         return 10 * self._value

#     @ten_value.setter
#     def ten_value(self, new_value):
#         self._value = new_value / 10


# obj = MyClass(10)
# print(obj._value)
# obj.show()

# obj.ten_value = 89    # will throw error
# print(obj.ten_value)
# # print(obj.ten_value)
# print(obj._value)



# ******************************************************************




class MyClass:
    def __init__(self):
        self._my_attribute = 12

    @property
    def my_attribute(self):
        return self._my_attribute

    @my_attribute.setter
    def my_attribute(self, value):
        if value >= 0:
            self._my_attribute = value
        else:
            print("Attribute value must be non-negative.")

    @my_attribute.deleter
    def my_attribute(self):
        del self._my_attribute

obj = MyClass()
print(obj._my_attribute)
obj.my_attribute = 10  # Sets the attribute value using the setter method
print(obj._my_attribute)
del obj.my_attribute   # Deletes the attribute using the deleter method
print(obj._my_attribute)
