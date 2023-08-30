class Person:
    name = "Nishant"
    occupation = "Software Developer"
    networth = 23000
    def info(self):
        print(f"{self.name} is a {self.occupation}")

a = Person()
print(a.name, a.occupation)
a.info()
a.name = "Shubham"
a.occupation = "Accountant"
print(a.name, a.occupation)
a.info()

b = Person()
b.name = "Rahul"
b.occupation = "Developer"
print(b.name, b.occupation)
b.info()

c = Person()
c.name = "Sohan"
c.occupation = "Businessman"
print(c.name, c.occupation)
c.info()
