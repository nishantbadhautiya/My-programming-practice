lang1=input("enter Sachin's favourite language: ")
lang2=input("enter Rahul's favourite language: ")
lang3=input("enter vikash's favourite language: ")
lang4=input("enter mohit's favourite language: ")
lang= { }
# lang.update({"Sachin":lang1,
# "Rahul": lang2,
# "vikash":lang3,
# "mohit":lang4})
lang["Sachin"]=lang1
lang["Rahul"]=lang2
lang["Vikash"]=lang3
lang["mohit"]=lang4
print(lang)
print("favourite subject of rahul is: ",lang["Rahul"])