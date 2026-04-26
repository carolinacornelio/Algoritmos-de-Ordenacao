#include "bubble_sort.h"

void bubbleSort(int v[], int n, Resultado *r) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            r->comparacoes++;

            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;

                r->trocas++;
            }
        }
    }
}