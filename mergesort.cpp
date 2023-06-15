#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int l, int m, int r)
{
    // Implementación de la función merge
    // ...

}

void mergeSort(int arr[], int l, int r)
{
    // Implementación de la función mergeSort
    // ...

}

int main()
{
    int n = 10000; // Tamaño del arreglo
    int arr[n];

    // Generar el arreglo de forma aleatoria
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand();
    }

    // Medir el tiempo de ejecución
    clock_t start = clock();

    mergeSort(arr, 0, n - 1);

    clock_t end = clock();
    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Tiempo de ejecución en C: %f segundos\n", elapsed_time);

    return 0;
}

