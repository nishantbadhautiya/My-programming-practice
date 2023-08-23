# f = open('myfile.txt', 'r')
# while True:
#     line = f.readline()
#     if not line:
#         break
#     print(line)





# f = open('myfile.txt', 'r')
# i = 0
# while True:
#     i = i + 1
#     line = f.readline()
#     if not line:
#         break
#     marks1 = int(line.split(',')[0])  # english
#     marks2 = int(line.split(',')[1])  # hindi
#     marks3 = int(line.split(',')[2])  # math
#     print(f"Marks of Student {i} is: {marks1}")
#     print(f"Marks of Student {i} is: {marks2}")
#     print(f"Marks of Student {i} is: {marks3}")
#     print(line)





# f = open('myfile2.txt', 'w')
# lines = ['line 1\n', 'line 2\n', 'line 3\n']
# f.writelines(lines)
# f.close()




f = open('myfile3.txt', 'w')
lines = ['line 1', 'line 2', 'line 3']
for line in lines:
    f.write(line + '\n')
f.close()

