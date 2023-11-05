import pyttsx3
import datetime
from task import Task

class BasicOperation:
    def __init__(self):
        self.wishMe()
        self.speak("what do you want's to get help from me")

    def speak(self, text):
        engine = pyttsx3.init() # object creation

        """ RATE"""
        rate = engine.getProperty('rate')   # getting details of current speaking rate
        engine.setProperty('rate', 250)     # setting up new voice rate

        """VOLUME"""
        volume = engine.getProperty('volume')   #getting to know current volume level (min=0 and max=1)
        engine.setProperty('volume',1.0)    # setting up volume level  between 0 and 1

        """VOICE"""
        voices = engine.getProperty('voices')       #getting details of current voice
        #engine.setProperty('voice', voices[0].id)  #changing index, changes voices. o for male
        engine.setProperty('voice', voices[1].id)   #changing index, changes voices. 1 for female
        engine.say(text)
        engine.runAndWait()
        engine.stop()

    def wishMe(self):
        current_hour_time = datetime.datetime.now().hour
        if(current_hour_time >= 4 and current_hour_time <= 11):
            self.speak("Good Morning Sir")
        
        if(current_hour_time >= 12 and current_hour_time <= 15):
            self.speak("Good Afternoon Sir")
        
        if(current_hour_time >= 16 and current_hour_time <= 21):
            self.speak("Good Evening Sir")
        
        if(current_hour_time >= 22 and current_hour_time <= 3):
            self.speak("Good Night Sir")


    def getQuery(self):
        print("Listening...")
        self.query = input("Enter the query: ")
        return self.query

obj = BasicOperation()
query = obj.getQuery()

obj2 = Task(query)

