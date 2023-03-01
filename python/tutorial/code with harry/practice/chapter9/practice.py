from turtle import end_fill
file = open("sample.txt", "wt")
# file.write("hello nishant badhautiya how are you ")
def replace_text(file, word):
    new_file = file.write(word,"")
    print(new_file)
file.close()

# text = input("enter the text:  ")
word = input("enter the word: ")
replace_text(file, word)
