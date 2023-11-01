import os
def speak(text):
    import pyttsx3
    engine = pyttsx3.init()
    engine.say(text)
    engine.runAndWait()

if(__name__ == "__main__"):
    print("**************  Welcome to RoboSpeaker  *****************")
    while True:
        x = input("What you wants to say: ")
        if(x == 'q'):
            speak("bye bye friend")
            break
        speak(x)
