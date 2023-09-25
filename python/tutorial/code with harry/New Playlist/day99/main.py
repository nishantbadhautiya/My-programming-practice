import time
from plyer import notification
# time_seconds = int(input("Set the seconds after you wants to drink water: "))
time_seconds = 10
while(True):
    time.sleep(time_seconds)
    notification.notify(title = "Water", message = "you should drink water", timeout = 2)
