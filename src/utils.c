#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

void gerarAleatorio(int v[], int n) {
    for (int i = 0; i < n; i++)
        v[i] = rand() % 100000;
}

void gerarOrdenado(int v[], int n) {
    for (int i = 0; i < n; i++)
        v[i] = i;
}

void gerarInverso(int v[], int n) {
    for (int i = 0; i < n; i++)
        v[i] = n - i;
}

double medirTempo(clock_t inicio, clock_t fim) {
    return ((double)(fim - inicio)) / CLOCKS_PER_SEC;
}

void executarTeste(void (*algoritmo)(int[], int, Resultado*), int v[], int n, Resultado *r) {
    clock_t inicio, fim;

    r->comparacoes = 0;
    r->trocas = 0;

    inicio = clock();

    algoritmo(v, n, r);

    fim = clock();

    r->tempo = medirTempo(inicio, fim);

}

void copiarVetor(int dest[], int src[], int n) {
    for(int i = 0; i < n; i++) dest[i] = src[i];
}

void ordenarVetor(int v[], int n) {
    qsort(v, n, sizeof(int), cmp);
}

void inverterVetor(int v[], int n) {
    for(int i = 0; i < n/2; i++) {
        int temp = v[i];
        v[i] = v[n-1-i];
        v[n-1-i] = temp;
    }
}

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}