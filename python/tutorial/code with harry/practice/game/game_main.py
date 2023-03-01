from tkinter import W
import random


def game(com, you):
    if (com == you):
        return None
    elif (com == "s"):
        if (you == "w"):
            return False
        elif (you == "g"):
            return True
    elif (com == "w"):
        if (you == "s"):
            return True
        elif (you == "g"):
            return False
    elif (com == "g"):
        if (you == "s"):
            return False
        elif (you == "w"):
            return True


randno = random.randint(1, 3)
print(randno)
print("computer turn : snake(s), water(w) or gun(g)")
if (randno == 1):
    com = "s"
elif (randno == 2):
    com = "w"
elif (randno == 3):
    com = "g"
you = input("your turn : snake(s), water(w) or gun(g)")
print(f"computer choosed: {com}")
print(f"you choosed: {you}")
a = game(com, you)
if (a == None):
    print("Game got tie")
elif (a == True):
    print("you Won!")
elif (a == False):
    print("you lose!")