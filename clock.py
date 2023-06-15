import random
import time

def merge(arr, l, m, r):
    # Implementación de la función merge
    # ...

def mergeSort(arr, l, r):
    # Implementación de la función mergeSort
    # ...

n = 10000  # Tamaño del arreglo
arr = [random.randint(0, 100000) for _ in range(n)]  # Generar el arreglo de forma aleatoria

# Medir el tiempo de ejecución
start_time = time.time()

mergeSort(arr, 0, n - 1)

end_time = time.time()
elapsed_time = end_time - start_time

print("Tiempo de ejecución en Python:", elapsed_time, "segundos")
