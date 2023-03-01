l1 =['harry','sohan','Sachin','rahul']
# for i in range(0,4):
#     if(l1[i][0]=="s" or l1[i][0]=="S"):
#         print("Good Morning " + l1[i])

for i in l1:
    if (i.startswith("s") or i.startswith("S")):
        print(i)
