def game_output(comp_input, user_input):
    if(comp_input == "s" and user_input == "s"):
        return 0
    if(comp_input == "s" and user_input == "w"):
        return -1
    if(comp_input == "s" and user_input == "g"):
        return 1

    if(comp_input == "w" and user_input == "g"):
        return -1
    if(comp_input == "w" and user_input == "w"):
        return 0
    if(comp_input == "w" and user_input == "s"):
        return 1
    
    if(comp_input == "g" and user_input == "s"):
        return -1
    if(comp_input == "g" and user_input == "w"):
        return -1
    if(comp_input == "g" and user_input == "g"):
        return 0

comp_input = "s"  # computer input
user_input = input("Enter s / w / g :--> ")
result = game_output(comp_input, user_input)
if(result == 1):
    print("You won")
elif (result == 0):
    print("Game Draw")
else:
    print("You Lose")
