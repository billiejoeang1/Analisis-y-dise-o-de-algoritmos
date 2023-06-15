import random
import time

def DAC_Max(a, index, l):
    if l - 1 == 0:
        return a[index]
    if index >= l - 2:
        if a[index] > a[index + 1]:
            return a[index]
        else:
            return a[index + 1]

    max_val = DAC_Max(a, index + 1, l)

    if a[index] > max_val:
        return a[index]
    else:
        return max_val

def DAC_Min(a, index, l):
    if l - 1 == 0:
        return a[index]
    if index >= l - 2:
        if a[index] < a[index + 1]:
            return a[index]
        else:
            return a[index + 1]

    min_val = DAC_Min(a, index + 1, l)

    if a[index] < min_val:
        return a[index]
    else:
        return min_val

N = 10000
a = [random.randint(0, 999) for _ in range(N)]

start = time.time()
max_val = DAC_Max(a, 0, N)
min_val = DAC_Min(a, 0, N)
end = time.time()
execution_time = end - start

print("The minimum number in the array is:", min_val)
print("The maximum number in the array is:", max_val)
print("Time taken to execute in Python:", execution_time, "seconds")
