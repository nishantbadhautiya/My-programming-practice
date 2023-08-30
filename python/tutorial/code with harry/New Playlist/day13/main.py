# STRING METHOD
#*********************

# name = "Nishant"
# print(name.upper()) #converts a string to upper case
# print(name.lower()) #converts a string to lower case


# name2 = "        Aman             "
# print(len(name2))    # Output = 25
# print(name2.strip()) # removes any white spaces before and after the string
# print(len(name2.strip()))  # Output = 4


# name3 = "Hello!!!!s"
# print(name3.rstrip("!s"))  # rstrip() removes any trailing characters and helps you clean up text by removing specific characters from the end (right side) of a string   include whitespace (spaces, tabs, newlines) 


# name4 = "Silver spoon"
# new_name4 = name4.replace("sp", "m")  #replace() method replaces all occurences of a string with another string
# print(new_name4)
# print(new_name4.split(" ")) #The split() method splits the given string at the specified instance and returns the separated strings as list items.



# str1 = "hello"
# capStr1 = str1.capitalize()  # The capitalize() method turns only the first character of the string to uppercase and the rest other characters of the string are turned to lowercase. The string has no effect if the first character is already uppercase.
# print(capStr1)
# str2 = "hello WorlD"
# capStr2 = str2.capitalize()
# print(capStr2)


# str1 = "Welcome to the console!!!"
# print(len(str1))
# new_str = str1.center(50)  #method aligns the string to the center as per the parameters given by the user.
# print(new_str)
# print(len(new_str))
# print(str1.center(50, "%"))   #provide padding character



# str1 = "Abracadabra"
# countStr = str1.count("a")  #The count() method returns the number of times the given value has occurred within the given string.
# print(countStr)



# str1 = "Welcome to the Console !!!"
# print(str1.endswith("!!!"))  #The endswith() method checks if the string ends with a given value. If yes then return True, else return False.
# str1 = "Welcome to the Console !!!"
# print(str1.endswith("to", 4, 10))  #We can even also check for a value in-between the string by providing start and end index positions.




# str1 = "He's name is Dan. He is an honest man."
# print(str1.find("is"))    #The find() method searches for the first occurrence of the given value and returns the index where it is present. If given value is absent from the string then return -1.



# str1 = "He's name is Dan. He is an honest man."
# print(str1.index("Danial"))   # index() method is somewhat similar to the find() method. The major difference being that index() raises an exception if value is absent whereas find() does not.




# str1 = "WelcomeToTheConsole34"
# print(str1.isalnum())     #The isalnum() method returns True only if the entire string only consists of A-Z, a-z, 0-9. If any other characters or punctuations are present, then it returns False.



# str1 = "Welcome"
# print(str1.isalpha())  #The isalnum() method returns True only if the entire string only consists of A-Z, a-z. If any other characters or punctuations or numbers(0-9) are present, then it returns False.




# str1 = "hello world"
# print(str1.islower())   #The islower() method returns True if all the characters in the string are lower case, else it returns False.



# str1 = "I am a good \n boy"   #False
# str1 = "I am a good boy"   #True
# str1 = " "   #True
# str1 = "Hello \n World"   #False
# str1 = "#$%^&"   #True
# print(str1.isprintable())  #The isprintable() method returns True if all the values within the given string are printable, if not, then return False.





# str0 = "Nishant       kumar"  # Output = false
# print(str0.isspace())
# str1 = "            "       #using Spacebar           Output = True
# print(str1.isspace())
# str2 = "    \n\t    "       #using Tab                Output = True
# print(str2.isspace())   #The isspace() method returns True only and only if the string contains only white space, \n and \t only  else it will returns False.






# str1 = "World health organization"   # Output = False
# str1 = "World Health Organization"   # Output = True
# print(str1.istitle())    #The istitile() returns True only if the first letter of each word of the string is capitalized, else it returns False.




# str1 = "WORLD HEALTH ORGANIZATION" 
# print(str1.isupper())    #The isupper() method returns True if all the characters in the string are upper case, else it returns False.





# str1 = "Python is a Interpreted Language" 
# print(str1.startswith("Python"))    #The startswith() method checks if the string starts with a given value. If yes then return True, else return False.




# str1 = "Python is a Interpreted Language" 
# print(str1.swapcase())    #The swapcase() method changes the character casing of the string. Upper case are converted to lower case and lower case to upper case.






# str1 = "He's name is Dan. Dan is an honest man."
# print(str1.title())   #The title() method capitalizes each letter of the word within the string.
