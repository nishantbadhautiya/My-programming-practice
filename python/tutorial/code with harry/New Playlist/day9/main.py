# TYPECASTING IN PYTHON
# Python supports a wide variety of functions or methods like: int(), float(), str(), ord(), hex(), oct(), tuple(), set(), list(), dict(), etc. for the type casting in python.

# Two Types of Typecasting:
# Explicit Conversion (Explicit type casting in python)
# Implicit Conversion (Implicit type casting in python).


# Explicit type casting
number = 34
string = "12"
# sum = number + string      ---> will throw error
sum = number + int(string)
print("The sum of", number, "and", string, "is: ", sum)