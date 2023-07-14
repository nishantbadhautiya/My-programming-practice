from tkinter import N


for i in range(2,11):
    file = open(f"table\\multiplication_table_of_{i}.txt","w")
    for j in range(1,11):
        file.write(f"{i}*{j}={i*j} \n")
        # file.close()