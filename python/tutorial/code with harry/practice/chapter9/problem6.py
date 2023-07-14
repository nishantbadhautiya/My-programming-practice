
i=1
with open("log.txt") as f:
    content= f.readline()
    
if "python" in content:
    print("python is present in log file.")
else:
    print("python is not present")