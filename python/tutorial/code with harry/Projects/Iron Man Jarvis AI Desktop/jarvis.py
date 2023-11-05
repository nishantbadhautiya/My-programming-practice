import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os
import datetime
import smtplib

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
        # print(f"User said: {query} \n")

    except Exception as e:
        print(e)
        print("Say that again please...")
        return "None"
    # return query
    return "send mail"

def sendmail(to, message):
    print(to)
    print(message)
    # creates SMTP session
    s = smtplib.SMTP('smtp.gmail.com', 587)
    s.ehlo()
    # start TLS for security
    s.starttls()
    # Authentication
    s.login("amankumar536894@gmail.com", "Password123@#*")
    # sending the mail
    s.sendmail("amankumar536894@gmail.com", to, message)
    # terminating the session
    s.quit()

if __name__ == "__main__":
    wishMe()
    # speak("Nishant is a good boy")
    query = takeCommand().lower()
    print(query)
    if 'wikipedia' in query:
        query = query.replace('wikipedia', "")
        print(query)

        results = wikipedia.summary(query, sentences=2)
        print(results)

        speak("According to wikipedia")
        speak(results)

    if 'open youtube' in query:
        speak("I am opening youtube")
        webbrowser.open('youtube.com')
    

    elif 'open google' in query:
        speak("I am opening google")
        webbrowser.open('google.com')
    

    elif 'open stack overflow' in query:
        speak("I am opening stackoverflow")
        webbrowser.open('stackoverflow.com')
    
    elif 'play music' in query:
        music_path = 'C:\\Users\\Nishant Badhautiya\\Music'
        songs = os.listdir(music_path)
        print(songs)
        os.startfile(os.path.join(music_path, songs[0]))
        
    elif 'the time' in query:
        curr_time = datetime.datetime.now()
        curr_time = curr_time.strftime("%H:%M:%S")
        print(curr_time)
        speak(f"The current time is {curr_time}")

    elif 'open code' in query:
        code_path = "C:\\Users\\Nishant Badhautiya\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"
        os.startfile(code_path)
    
    elif 'send mail' in query:
        try:
            to = "yenarep905@undewp.com"
            # print("Tell me the message that you wants to send...")
            # print("Listening...")
            # message = takeCommand()
            message = "hey! I am learning python programming language"
            sendmail(to, message)
            speak("Successfully send the mail")
        except Exception as e:
            print(e)
            speak("Sorry failed to send the email")
