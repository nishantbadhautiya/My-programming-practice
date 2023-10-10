import pyttsx3
import datetime
import speech_recognition as sr

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    hour = int(datetime.datetime.now().hour)
    # print(hour)
    if hour >= 0 and hour < 12:
        speak("Good Morning")
    elif hour >= 12 and hour < 18:
        speak("Good Afternoon")
    else:
        speak("Good Evening")
    # speak("I am Jarvis Sir, Please tell me how may I help you")


def takeCommand():
    '''It take microphone input from the user and returns string output '''
    r = sr.Recognizer()  # Recognizer class help of us to recognize audio
    with sr.Microphone() as source:
        print("Listening")
        r.pause_threshold = 0.8
        r.energy_threshold = 300
        audio = r.listen(source)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')  # converts audio to text 
        print(f"User said: {query} \n")

    except Exception as e:
        print(e)
        print("Say that again please...")
        return "None"
    return query

if __name__ == "__main__":
    wishMe()
    # speak("Nishant is a good boy")
    res = takeCommand()
    print(res)




# 27:30
