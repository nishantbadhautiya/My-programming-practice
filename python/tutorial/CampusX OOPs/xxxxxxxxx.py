import random
def gamewin(com, you):
    if (com == you):
        return None
    elif com == 's':
        if (you == 'w'):
            return False
        elif (you == 'g'):
            return True
    elif (com == "w"):
        if (you == "s"):
            return True
        elif (you == 'g'):
            return False
    elif (com == "g"):
        if (you == "s"):
            return False
        elif (you == "w"):
            return True

print("Computer Turn: snake(1), water(2), gun(3): ")
random_number = random.randint(1, 3)
# print(random_number)
if (random_number == 1):
    com = 's'
elif (random_number == 2):
    com = 'w'
elif (random_number == 3):
    com = 'g'
you = input("your turn: Snake(s), water(w), gun(g):  ")
print("computer choosed: ",com)
print("you choosed: ",you)
result = gamewin(com, you)
if (result == None):
    print("Game got tie")
elif (result == True):
    print("You Win! ")
elif (result == False):
    print("You Lose! Try again")
