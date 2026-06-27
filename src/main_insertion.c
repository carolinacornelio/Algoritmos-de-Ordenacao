#include <stdio.h>
#include <stdlib.h>

#include "utils.h"
#include "benchmark.h"
#include "insertion_sort/insertion_sort.h"

int main()
{

    // Opções de gargas trabalhadas 1000 x 10000 x 100000
    int tamanho = 100000; 

    // Pede espaço na memória para guardar os números
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    } 
  
    printf("%-15s | %-7s | %-10s | %-10s | %-12s | %-10s\n",
           "Algoritmo", "Tamanho", "Estado", "Tempo (ms)", "Comparacoes", "Trocas");
    printf("------------------------------------------------------------------------\n");

    // Opções de cenarios para o teste 
    // 0 - Aleatorio 1 - Ordenado 2 - Inverso
    testarUmaVez("Insertion Sort", insertionSort, vetor, tamanho, 2);
    imprimirVetor(vetor,20);
    
    // Limpa a bagunça
    free(vetor);

    printf("\n=== TESTE CONCLUIDO ===\n");
    return 0;
}