# import os 
# os.system("ipconfig")


import win32com.client
shoutout = ["Nishant", "Rahul", "Amit"]
speaker = win32com.client.Dispatch("SAPI.SpVoice")
for name in shoutout:
    print(name)
    speaker.Speak(f"Shoutout to {name}")
