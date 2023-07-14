def game():
    return 84

file = open("hiscore.txt", "rt")
hiscore = file.read()
score = game()
if (hiscore == ""):
    f = open("hiscore.txt", "w")
    f.write(str(score))
elif (score > int(hiscore)):
    f = open("hiscore.txt", "w")
    f.write(str(score))
