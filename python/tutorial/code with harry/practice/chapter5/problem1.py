dictionary = {"aam":"Mango",
"khelana":"play",
"aadami":"man",
"pankha":"fan"}
print("your options are: ",dictionary.keys())
inp = input("Enter Hindi word: ")
print("English word is: ",dictionary.get(inp))