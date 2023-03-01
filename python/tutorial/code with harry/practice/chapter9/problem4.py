with open("nishant.txt", "r") as file:
    content = file.read()
new_file = content.replace("donkey", "@#$#^^@!#")
with open("nishant.txt", "w") as file:
    file.write(new_file)
