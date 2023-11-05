# sentence  = "My name is Nishant Badhautiya"
# words = sentence.split(" ")
# print(words)
# mylist = ["Nishant", "is", "My"]
# if mylist in words:
#     print("Present")
# else:
#     print("Not present")





sentence = "This is a sample sentence with some words."
mylist = ["sample", "words", "with", "bar"]
mylist2 = ["sample", 'is']
words_in_sentence = sentence.split()
# matching_words = [word for word in words_in_sentence if word in mylist]
for i in words_in_sentence:
    if i in mylist or i in mylist2:
        print(i)
