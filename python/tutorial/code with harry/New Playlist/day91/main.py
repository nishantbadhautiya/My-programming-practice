# LIST => List already have a value 
# GENERATORS => Generates on the fly value 

def my_generator():
    for i in range(5):  # complex computation
        yield i # yield statement returns a value from the generator and suspends the execution of the function until the next value is requested.
            # yield rather than return so it's a generator

gen = my_generator()
# print(next(gen))
# print(next(gen))
# print(next(gen))
# print(next(gen))
# print(next(gen))


for i in gen:
    print(i)
