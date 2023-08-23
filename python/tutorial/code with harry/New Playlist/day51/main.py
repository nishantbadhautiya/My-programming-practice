# with open('day51/myfile.txt', 'r') as f:
#     print(type(f))
#     # Move to the 10th byte in the file
#     f.seek(10)
#     # Read the next 5 bytes
#     data = f.read(5)
#     print(data)




# with open('day51/myfile.txt', 'r') as f:
#     print(type(f))
#     # Move to the 10th byte in the file
#     f.seek(10)
#     # Save the current position
#     print(f.tell())
#     # Read the next 5 bytes
#     data = f.read(5)
#     print(f.tell())
#     print(data)




with open('day51/sample.txt', 'w') as f:
    f.write('Hello World!')
    f.truncate(9)
with open('day51/sample.txt', 'r') as f:
    print(f.read())
