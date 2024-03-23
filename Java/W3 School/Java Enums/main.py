sentence = "Beautiful is better than ugly"
mylist = []
for word in sentence:
    word = word.lower()
    for letter in word:
        if(letter == " "):
            continue
        mylist.append(letter)
mylist.sort()
ans = ""
for i in mylist:
    if i == ans[-1]:
        continue
print(mylist)

