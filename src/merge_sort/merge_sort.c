#include <stdlib.h>
#include "merge_sort.h"

void merge(int v[], int l, int m, int rgt, Resultado *r) {
    int n1 = m - l + 1;
    int n2 = rgt - m;

    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = v[l + i];
    for (int j = 0; j < n2; j++) R[j] = v[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        r->comparacoes++;
        if (L[i] <= R[j]) {
            v[k++] = L[i++];
        } else {
            v[k++] = R[j++];
        }
        r->trocas++;
    }

    while (i < n1) v[k++] = L[i++];
    while (j < n2) v[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSortRec(int v[], int l, int rgt, Resultado *r) {
    if (l < rgt) {
        int m = (l + rgt) / 2;
        mergeSortRec(v, l, m, r);
        mergeSortRec(v, m + 1, rgt, r);
        merge(v, l, m, rgt, r);
    }
}

void mergeSort(int v[], int n, Resultado *r) {
    mergeSortRec(v, 0, n - 1, r);
}