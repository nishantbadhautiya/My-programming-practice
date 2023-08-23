import os
folders = os.listdir("data")   # prints all the folders name in a list
# print(folders)
for folder in folders:
    print(folder)
    print(os.listdir(f"data/{folder}"))   # using this way we can create search in file manager to find a file or folder 

