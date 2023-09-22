# Requests module in python
# enables developers to send HTTP requests in Python

# GET REQUEST IN PYTHON
import requests
# response = requests.get("https://www.google.com")
# response = requests.get("https://jsonplaceholder.typicode.com/posts")
# print(response.text)



# POST REQUEST IN PYTHON

# url = "https://jsonplaceholder.typicode.com/posts"
# data = {
#     "title": 'foo',
#     "body": 'bar',
#     "userId": 1,
#   }
# headers = {
#     'Content-type': 'application/json; charset=UTF-8',
# }
# response = requests.post(url, headers=headers, json=data)
# print(response.text)



# url = "https://www.codewithharry.com/blogpost/django-cheatsheet/"
# r = requests.get(url)
# print(r.text)





from bs4 import BeautifulSoup
url = "https://www.codewithharry.com/blogpost/django-cheatsheet/"
r = requests.get(url)
soup = BeautifulSoup(r.text, 'html.parser') 
# print(soup.prettify())
for heading in soup.find_all("h2"): #get h2 from the static page not from dynamic page(like h2 from api requests)
    print(heading.text)

    