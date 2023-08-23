val = 'Geeks'  
print(f"{val}for{val} is a portal for {val}.")  
name = 'Tushar'  
age = 23  
print(f"Hello, My name is {name} and I'm {age} years old.")
print(f"I am using fstring like this:- Hello, My name is {{name}} and I'm {{age}} years old.")

# ***********************************************************

print(f"{2 * 30}")
print(type(f"{2 * 30}"))

# ***********************************************************


txt = "For only {price:.3f} dollars!"
print(txt.format(price = 49))

# ***********************************************************


price = 88.929834
txt2 = (f"For only {price:.3f} dollers!")
print(txt2)



# ***********************************************************

status = "Hello my name is {} and I am from {}"
print(status.format("Nishant", "India"))


# ***********************************************************


status = "Hello my name is {1} and I am from {0}"
print(status.format("India", "Nishant"))

