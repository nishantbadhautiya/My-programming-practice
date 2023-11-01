# https://api.weatherapi.com/v1/current.json?key=82cae64491c24a4dbaf93006232610&q=London

import requests
import json
import win32com.client


city = input("Enter the city: ")
url = f"https://api.weatherapi.com/v1/current.json?key=82cae64491c24a4dbaf93006232610&q={city}"
r = requests.get(url)
weather_dict = json.loads(r.text)
weather = weather_dict["current"]["temp_c"]
print(weather)
speaker = win32com.client.Dispatch("SAPI.SpVoice")
speaker.Speak(f"The current weather in {city} is {weather} degree celcius")
