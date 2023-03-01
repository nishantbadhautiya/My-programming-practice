from __future__ import nested_scopes
from ctypes.wintypes import WORD
from hashlib import new


def new_string(text, word):
    new_text = text.replace(word," ")
    return new_text.strip()
    # return text
text = input("enter the text: \n")
word= input("enter the word to remove from text: ")
print(new_string(text, word))