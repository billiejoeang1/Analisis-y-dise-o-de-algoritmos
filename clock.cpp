#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DAC_Max(int a[], int index, int l);
int DAC_Min(int a[], int index, int l);

int DAC_Max(int a[], int index, int l) {
    int max;
    if (l - 1 == 0) {
        return a[index];
    }
    if (index >= l - 2) {
        if (a[index] > a[index + 1])
            return a[index];
        else
            return a[index + 1];
    }

    max = DAC_Max(a, index + 1, l);

    if (a[index] > max)
        return a[index];
    else
        return max;
}

int DAC_Min(int a[], int index, int l) {
    int min;
    if (l - 1 == 0) {
        return a[index];
    }
    if (index >= l - 2) {
        if (a[index] < a[index + 1])
            return a[index];
        else
            return a[index + 1];
    }

    min = DAC_Min(a, index + 1, l);

    if (a[index] < min)
        return a[index];
    else
        return min;
}

int main() {
    int min, max;
    int N = 10000;
    int* a = malloc(N * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 1000; // Genera números aleatorios entre 0 y 999
    }

    clock_t start = clock();
    max = DAC_Max(a, 0, N);
    min = DAC_Min(a, 0, N);
    clock_t end = clock();
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("The minimum number in the array is: %d\n", min);
    printf("The maximum number in the array is: %d\n", max);
    printf("Time taken to execute in C: %f seconds\n", cpu_time_used);

    free(a);
    return 0;
}

