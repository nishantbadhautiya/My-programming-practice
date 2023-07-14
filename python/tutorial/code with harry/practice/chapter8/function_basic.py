# 06:07:50  ------------------------> function and recursion
def percent(marks):
    return ((sum(marks))/400)*100
marks1 = [34, 67, 82, 94]
percentage1 = percent(marks1)
marks2 = [26, 72, 43, 51]
percentage2 = percent(marks2)
print(percentage1, percentage2)
marks3= [35,74,24,63]
print(percent(marks3))
