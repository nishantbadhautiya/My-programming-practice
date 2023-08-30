class MyClass:
    def __init__(self, value):
        self._value = value
    def show(self):
        print(f"Value is: {self._value}")
    @property
    def ten_value(self):      # getter function
        return 10 * self._value
    @ten_value.setter
    def ten_value(self, new_value):
        self._value = new_value / 10

obj = MyClass(10)
print(obj._value)
obj.show()

obj.ten_value = 89    # will throw error
print(obj.ten_value)
# print(obj.ten_value)
print(obj._value)
