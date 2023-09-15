# def greet(fx):
#     def mfx():
#         print("Good Morning")
#         fx()
#         print("Thanks for using this function")
#     return mfx
# @greet
# def hello():
#     print("Hello World")
# # greet(hello)()   # can also do this it's similar to @greet and calling the function to do so remove @greet
# hello()



# def greet(fx):
#     def mfx():
#         print("Good Morning")
#         fx()
#         print("Thanks for using my function")
#     return mfx
# def hello():
#     print("hello world")
## Apply the decorator to the hello function
# hello = greet(hello)
## Call the decorated hello function 
# hello()




def greet(fx):
    def mfx(*args, **kwargs):
        print("Good Morning")
        fx(*args, **kwargs)
        print("Thanks for using this function")
    return mfx
@greet
def hello():
    print("Hello World")
# @greet
def add(a, b):
    print(a + b)
hello()
print("\n")
greet(add)(1, 2)

