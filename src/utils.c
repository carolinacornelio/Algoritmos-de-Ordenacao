#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

void gerarAleatorio(int v[], int n) {
    for (int i = 0; i < n; i++)
        v[i] = rand() % 10;
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
