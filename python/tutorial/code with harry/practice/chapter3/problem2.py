letter = '''Dear <NAME>
I wants to notice you that
you get selected.
Date: <DATE>'''
name = input("Enter your name : ")
date = input("Enter Today Date: ")
letter = letter.replace("<NAME>",name)
letter = letter.replace("<DATE>",date)
print(letter)