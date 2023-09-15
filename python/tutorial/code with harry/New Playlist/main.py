# Operator Overloading in Python
# Operator Overloading is a way by which we can change the behaviour of our operator

class Vector:
    def __init__(self, i, j, k):
        self.i = i
        self.j = j
        self.k = k

    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"

    def __add__(self, x):
        # return f"{self.i + x.i}i + {self.j + x.j}j + {self.k + x.k}k"   # will return a string
        return Vector(self.i + x.i, self.j + x.j, self.k + x.k) # now it will return a vector

v1 = Vector(3, 5, 6)
print(v1)

v2 = Vector(1, 2, 9)
print(v2)

print(v1 + v2)
print(type(v1 + v2))
