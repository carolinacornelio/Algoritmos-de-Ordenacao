#ifndef UTILS_H
#define UTILS_H

#include <time.h>

typedef struct {
    long long comparacoes;
    long long trocas;
    double tempo;
} Resultado;

void gerarAleatorio(int v[], int n);
void gerarOrdenado(int v[], int n);
void gerarInverso(int v[], int n);

void copiarVetor(int dest[], int src[], int n);
void ordenarVetor(int v[], int n);
void inverterVetor(int v[], int n);
void imprimirVetor(int v[], int n);
double medirTempo(clock_t inicio, clock_t fim);

void executarTeste(void (*algoritmo)(int[], int, Resultado*), int v[], int n, Resultado *r);

#endif