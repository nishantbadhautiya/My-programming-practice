import webbrowser

class Task:
    def __init__(self, query):
        print("Your query is: ", query)
        self.search_query()

    def search_query(self):    # data is the mini query that i wants to do some work 
        self.query = self.query.lower()
        search_query_word1 = ['open', 'visit']
        search_query_word2 = ['in chrome', 'in firefox', 'in edge']
        # if 'google' in query:
        #     self.search_query('google')
        

        data = "google"
        words = query.split()
        for i in words:
            if i in  search_query_word1 or i in search_query_word2:
                print(i)
                chrome_path = 'C:\Program Files\Google\Chrome\Application\chrome.exe" --profile-directory="Default'
                url = f"https://www.{data}.com"
                webbrowser.open(url)
