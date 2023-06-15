import random
import time

def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quickSort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)

size = 10000
arr = [random.randint(0, 100000) for _ in range(size)]

start = time.time()
quickSort(arr, 0, size - 1)
end = time.time()

execution_time = end - start
print("Time taken:", execution_time, "seconds")
