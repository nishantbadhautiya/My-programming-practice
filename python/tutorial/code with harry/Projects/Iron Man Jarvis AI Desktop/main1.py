import pyttsx3

engine = pyttsx3.init('sapi5') # Initializing the Engine and sapi5 is a microsoft speech api
voices = engine.getProperty('voices') #Getting Available Voices
# print(voices)
# print(voices[0].id) # David is a boy
# print(voices[1].id) # Zira is a girl
engine.setProperty('voice', voices[0].id) #Setting the Voice

def speak(audio):
    engine.say(audio)
    engine.runAndWait()
if __name__ == "__main__":
    speak("Nishant is a good boy")
