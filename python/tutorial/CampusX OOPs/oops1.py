from unicodedata import name


class Student:
    def __init__(self):
        self.name = input("enter the  student name: ")
        self.age = int(input("enter student age: "))
        self.roll = int(input("enter student roll number: "))
        self.gender = input("enter the gender of the student: ")
    def show_data(self):
        print("Name of the student is: ",self.name)
        print("Age of the student is: ", self.age)
        print("Roll number of the student is: ", self.roll)
        print("gender of the student is: ",self.gender)
s1 = Student()
# s1.set_data()
s1.show_data()