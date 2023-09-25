# Async IO in Python

# import time
# import asyncio
# async def function1():
#     # time.sleep(3)
#     await asyncio.sleep(1)
#     print("func 1")
# async def function2():
#     # time.sleep(3)
#     await asyncio.sleep(1)
#     print("func 2")
# async def function3():
#     # time.sleep(3)
#     await asyncio.sleep(4)
#     print("func 3")

# async def main():
#     task = asyncio.create_task(function1()) # function 1 is scheduled 
#     # await function1()
#     await function2()
#     await function3()

# asyncio.run(main())












# import time
# import asyncio
# async def function1():
#     await asyncio.sleep(1)
#     print("func 1")
# async def function2():
#     await asyncio.sleep(1)
#     print("func 2")
# async def function3():
#     await asyncio.sleep(4)
#     print("func 3")

# async def main():
#     L = await asyncio.gather(
#             function1(),
#             function2(),
#             function3(),
#         )
#     print(L)

# asyncio.run(main())










# Search on google "request python download a file" for code to see how to download a file or image
import time
import asyncio
import requests
async def function1():
    url = 'https://images.unsplash.com/photo-1482784160316-6eb046863ece?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxjb2xsZWN0aW9uLXBhZ2V8M3wzOTU0NTB8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=600&q=60'
    r = requests.get(url, allow_redirects=True)
    open('image.jpg', 'wb').write(r.content)
    print("func 1")
async def function2():
    url = 'https://www.facebook.com/favicon.ico'
    r = requests.get(url, allow_redirects=True)
    open('facebook2.ico', 'wb').write(r.content)
    print("func 2")
async def function3():
    url = 'https://www.facebook.com/favicon.ico'
    r = requests.get(url, allow_redirects=True)
    open('facebook3.ico', 'wb').write(r.content)
    print("func 3")

# DOWNLOAD FACEBOOK FAVICON TOGETHER
# async def main():
#     L = await asyncio.gather(
#             function1(),
#             function2(),
#             function3(),
#         )
#     print(L)

# DOWNLOAD FACEBOOK FAVICON ONE BY ONE 
async def main():
    await function1()
    await function2()
    await function3()
    
asyncio.run(main())
