l = ['donkey','owl','buffalo']
with open("donkey3.txt","r") as f:
    file= f.read()
for i in l:
    file = file.replace(i,"#%^^@@#")
    with open("donkey3.txt","w") as f:
        f.write(file)



