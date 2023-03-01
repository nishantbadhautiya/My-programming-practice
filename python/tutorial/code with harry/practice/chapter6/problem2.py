sub1 = int(input("enter marks of subject 1 : "))
sub2 = int(input("enter marks of subject 2 : "))
sub3 = int(input("enter marks of subject 3 : "))
# if((sub1>=33 and sub2>=33 and sub3>=33) and (sub1+sub2+sub3)/3>=40):
#     print("you got passed")
# else:
#     print("you got failed")
if (sub1 < 33 or sub2 < 33 or sub3 < 33):
    print("you got failed because you did not score more than 33 in any one subject ")
elif ((sub1+sub2+sub3)/3 < 40):
    print("you got failed because your score was less  than 40 percentile")
else:
    print("congratulaton! you got passed in this examination ")
