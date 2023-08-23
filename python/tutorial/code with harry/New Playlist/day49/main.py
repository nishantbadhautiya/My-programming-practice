# # f = open('myfile.txt')
# f = open('myfile.txt', 'r')
# print(f)
# text = f.read()
# print(text)
# f.close()



# *******************************************

# f = open('myfile.txt', 'w')
# print(f)
# f.write("Hello Nishant")
# f.close()



# *******************************************


# f = open('myfile.txt', 'a')
# print(f)
# f.write("Hello Nishant")
# f.close()


# *******************************************

with open('myfile.txt', 'w') as f:    #with statement automatically close the file after you are done with it.
    f.write("I am a good boy")
