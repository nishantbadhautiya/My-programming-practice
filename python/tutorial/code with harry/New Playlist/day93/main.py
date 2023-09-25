import requests
import json

query = input("What type of news are you interested in : ")
url = f"https://newsapi.org/v2/everything?q={query}&apiKey=39248d0d189b44cf810439c047ced174"
r = requests.get(url)
news = json.loads(r.text)
# print(news, type(news))
for article in news["articles"]:
    print(article["title"])
    print(article["description"])
    print("________________________________")

