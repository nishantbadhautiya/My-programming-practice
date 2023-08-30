# Instance vs class variables

# class Employee:
#     def __init__(self, name):
#         self.name = name
#     def showDetails(self):
#         print(f"The name of the employee is: {self.name}")

# emp1 = Employee("Nishant")
# # emp1.showDetails()
# Employee.showDetails(emp1)






class Employee:
    companyName = "Apple"
    no_of_employees = 0
    def __init__(self, name):
        self.name = name
        self.raise_amount = 0.02
        Employee.no_of_employees += 1
    def showDetails(self):
        print(f"The name of the employee is: {self.name} and raise amount in {self.no_of_employees} sized company {self.companyName} is {self.raise_amount}")


# Employee.showDetails(emp1)
emp1 = Employee("Harry")
emp1.raise_amount = 0.3
emp1.companyName = "Apple India"
emp1.showDetails()
Employee.companyName = "Google"
print(Employee.companyName)


emp2 = Employee("Rohan")
emp2.companyName = "Nestle"
emp2.showDetails()
