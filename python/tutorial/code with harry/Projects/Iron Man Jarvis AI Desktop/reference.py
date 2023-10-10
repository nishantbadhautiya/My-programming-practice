# ************************  PYTTSX3 TUTORIAL **************************************


# import pyttsx3
# # engine = pyttsx3.init()
# # engine.say('Sally sells seashells by the seashore.')
# # engine.say('The quick brown fox jumped over the lazy dog.')
# # engine.save_to_file('Hello World' , 'test.mp3')
# # engine.runAndWait()




# engine = pyttsx3.init()
# voices = engine.getProperty('voices')
# print("Voices are: ", voices)

# # Retrieve and print the current values of the properties
# #********************************************************
# # Set a new speech rate (e.g., 150 words per minute)
# engine.setProperty('rate', 200)
# print("Speech Rate (words per minute):", engine.getProperty('rate'))

# # Set a new voice (voice_id might vary based on your system)
# engine.setProperty('voice', voices[0].id)
# print("Voice id is: ", voices[0].id)
# # engine.setProperty('voice', 'HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_ZIRA_11.0')
# # print("Active Voice:", engine.getProperty('voice'))

# print("Available Voices:", engine.getProperty('voices'))

# # Set a new volume (e.g., 0.5 for half volume)
# engine.setProperty('volume', 0.5)
# print("Volume:", engine.getProperty('volume'))

# for voice in voices:
#     print("Voice ID:", voice.id)
#     print("Name:", voice.name)
#     print("Age:", voice.age)
#     print("Gender:", voice.gender)
#     print("Languages:", voice.languages)
#     print("=" * 30)  # Separator for better readability
#     print("Voice is: ", voice)
#     engine.setProperty('voice', voice.id)
#     engine.say('The quick brown fox jumped over the lazy dog.')

# engine.say('The quick brown fox jumped over the lazy dog.')
# engine.runAndWait()




# # def onStart(name):
# #     print('starting', name)

# # def onWord(name, location, length):
# #     print('word', name, location, length)

# # def onEnd(name, completed):
# #     print('finishing', name, completed)

# # engine = pyttsx3.init()
# # engine.connect('started-utterance', onStart)
# # engine.connect('started-word', onWord)
# # engine.connect('finished-utterance', onEnd)
# # engine.say('The quick brown fox jumped over the lazy dog.')
# # engine.runAndWait()



#******************************************************************************************************
#******************************************************************************************************

# ************************** DATETIME MODULE IN PYTHON *******************************

# import datetime


# # 1. Creating Date and Time Objects
# now = datetime.datetime.now()   # Current date and time
# print("Current time is: ", now)
# specific_time = datetime.datetime(2022, 9, 18, 16, 45, 50)  # Specific date and time
# print(specific_time)


# # 2. Formatting Dates and Times
# formatted_date = now.strftime("%d-%m-%Y")
# formatted_time = now.strftime("%H:%M:%S")
# formatted_datetime = now.strftime("%d-%m-%Y -- %H:%M:%S")
# print("Formatted date is:", formatted_date)
# print("Formatted time is: ", formatted_time)
# print("Formatted datetime is: ", formatted_datetime)


# # 3. Parsing Dates from Strings
# date_string = "2023-08-21"
# print(type(date_string))
# parsed_date = datetime.datetime.strptime(date_string, "%Y-%m-%d")
# print("Parsed date is: ", parsed_date)
# print(type(parsed_date))


# # 4. Working with Timedeltas
# five_days = datetime.timedelta(days=5)  # Calculate a timedelta of 5 days
# five_days_from_now = now + five_days  # Calculate the date 5 days from now
# print("Five days from now:", five_days_from_now)
# date1 = datetime.datetime(2023, 9, 22)
# date2 = datetime.datetime(2023, 9, 27)
# difference = date2 - date1  # Calculate the difference in days between two dates
# print("Difference in days:", difference)
# print("Difference in days:", difference.days)


# # 5. Working with Time Zones
# utc_now = datetime.datetime.utcnow()  # Get the UTC time
# print("UTC time:", utc_now)
# import pytz
# eastern = pytz.timezone('US/Eastern')  # Convert UTC time to a specific time zone
# eastern_time = utc_now.astimezone(eastern)
# print("Eastern time:", eastern_time)


# # 6. Date Arithmetic
# today = datetime.date.today()  # Get the current date
# print("Today:", today)
# five_days_later = today + datetime.timedelta(days=5)  # Calculate a date 5 days from today
# print("Date 5 days later:", five_days_later)
# date1 = datetime.date(2023, 9, 22)
# date2 = datetime.date(2023, 9, 27)
# difference = date2 - date1  # Calculate the difference in days between two dates
# print("Difference in days:", difference.days)


# # 7. Time Arithmetic
# current_time = datetime.datetime.now().time() # Get the current time
# print("Current time:", current_time)
# one_hour_thirty_mins_fourty_second_later = (datetime.datetime.now() + datetime.timedelta(hours=1, minutes=30, seconds=45)).time()  # Calculate a time 1 hour and 30 minutes from now
# print("Time 1 hour 30 minutes 45 second later:", one_hour_thirty_mins_fourty_second_later)


# # 8. Comparing Dates
# date1 = datetime.date(2023, 9, 27)
# date2 = datetime.date(2023, 9, 28)
# print("Date1 is before Date2:", date1 < date2)
# print("Date1 is equal to Date2:", date1 == date2)
# print("Date1 is after Date2:", date1 > date2)


# # 9. Extracting Date and Time Components
# now = datetime.datetime.now()
# print("Year:", now.year)
# print("Month:", now.month)
# print("Day:", now.day)
# print("Hour:", now.hour)
# print("Minute:", now.minute)
# print("Second:", now.second)






# *************************** SPEECH RECOGNIZATION IN PYTHON *****************************


import speech_recognition as sr

# Initialize the recognizer
recognizer = sr.Recognizer()

# Record audio from the microphone
with sr.Microphone() as source:  # sets up the microphone for listening
    print("Please speak something...")
    audio_data = recognizer.listen(source)  #  Whatever the user says is recorded and stored as audio_data

# write audio to a RAW file
with open("microphone-results.wav", "wb") as f:
    f.write(audio_data.get_wav_data())

# Recognize speech using Google Web Speech API
try:
    text = recognizer.recognize_google(audio_data)
    print("You said:", text)
except sr.UnknownValueError:
    print("Could not understand audio")
except sr.RequestError as e:
    print("Could not request results; {0}".format(e))
