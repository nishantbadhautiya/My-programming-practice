# import multiprocessing
# import requests

# def downloadFile(url, name):
#     response = requests.get(url)
#     open(f'day98/file{name}.jpg', 'wb').write(response.content)


# url = "https://picsum.photos/2000/3000"
# for i in range(5):
#     downloadFile(url, i)


# *************************************************************************************


# import multiprocessing
# import requests
# def downloadFile(url, name):
#     print(f"Started downloading {name}")
#     response = requests.get(url)
#     open(f'day98/file{name}.jpg', 'wb').write(response.content)
#     print(f"Finished downloading {name}")
# if(__name__ == "__main__"):
#     url = "https://picsum.photos/2000/3000"
#     pros = []
#     for i in range(5):
#         p = multiprocessing.Process(target=downloadFile, args=[url, i])
#         p.start()
#         pros.append(p)
#     for p in pros:
#         p.join()


# *************************************************************************************






import multiprocessing
import concurrent.futures
import requests
def downloadFile(url, name):
    print(f"Started downloading {name}")
    response = requests.get(url)
    open(f'day98/file{name}.jpg', 'wb').write(response.content)
    print(f"Finished downloading {name}")
if(__name__ == "__main__"):
    url = "https://picsum.photos/2000/3000"
    pros = []
    with concurrent.futures.ProcessPoolExecutor() as executor:
        l1 = [url for i in range(5)]
        l2 = [i for i in range(5)]
        print(l1)
        print(l2)
        results = executor.map(downloadFile, l1, l2)
        for r in results:
            print(r)
