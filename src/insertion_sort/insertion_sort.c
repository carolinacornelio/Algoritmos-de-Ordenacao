#include "insertion_sort.h"

void insertionSort(int v[], int n, Resultado *r) {
    int key, j;

    for (int i = 1; i < n; i++) {
        key = v[i];
        j = i - 1;

        while (j >= 0) {
            r->comparacoes++;
            if (v[j] > key) {
                v[j + 1] = v[j];
                r->trocas++;
                j--;
            } else {
                break;
            }
        }

        v[j + 1] = key;
    }
}