class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id
    def show_details(self):
        print(f"The name of the employee: {self.id} is {self.name}")
class Programmer(Employee):
    def showLanguage(self):
        print("The default language is: Python")

obj = Employee("Nishant", 333)
obj.show_details()
obj2 = Programmer("Rahul", 345)
obj2.showLanguage()
obj2.show_details()
