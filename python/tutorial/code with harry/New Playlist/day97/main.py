# # Multithreading in Python
# # useful to download a file from internet

# import threading
# import time
# def func(seconds):
#     print(f"Sleeping for {seconds} seconds")
#     time.sleep(seconds)

# #Normal Code
# # time1 = time.perf_counter()
# # func(4)
# # func(2)
# # func(1)
# # time2 = time.perf_counter()
# # print(time2 - time1)


# # Same code using Threads
# time1 = time.perf_counter()
# t1 = threading.Thread(target=func, args=[4])
# t2 = threading.Thread(target=func, args=[2])
# t3 = threading.Thread(target=func, args=[1])
# t1.start() # start the t1 thread
# t2.start()
# t3.start()
# t1.join() # stop till t1 don't end/stop
# t2.join()
# t3.join()
# # calculating time 
# time2 = time.perf_counter()
# print(time2 - time1)











#****************************************************************************
# concurrent.future is a module by using ThreadPoolExecutor we can we can submit function and can get result

# import threading
# from concurrent.futures import ThreadPoolExecutor
# import time
# def func(seconds):
#     print(f"Sleeping for {seconds} seconds")
#     time.sleep(seconds)
# def poolingDemo():
#     with ThreadPoolExecutor() as executor: # ThreadPoolExecutor helps to schedule the task in bulk
#         future1 = executor.submit(func, 3) # submit to the executor 
#         future2 = executor.submit(func, 2)
#         future3 = executor.submit(func, 4)
#         print(future1.result())
#         print(future2.result())
#         print(future3.result())

# poolingDemo()










#****************************************************************************
# concurrent.futures useful for parallel execution while doing any task link downloading files from the server 
import threading
from concurrent.futures import ThreadPoolExecutor
import time
def func(seconds):
    print(f"Sleeping for {seconds} seconds")
    time.sleep(seconds)
    return seconds
def poolingDemo():
    with ThreadPoolExecutor() as executor: # ThreadPoolExecutor helps to schedule the task in bulk
        l = [3,5,1,2]
        results = executor.map(func, l)
        for result in results:
            print(result)

poolingDemo()
