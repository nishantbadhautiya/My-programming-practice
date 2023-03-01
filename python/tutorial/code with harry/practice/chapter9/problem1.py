file = open("poems.txt","r")
text = file.read()
if "twinkle" in text:
    print("present")
else:
    print("not present")
file.close()
# print(text)