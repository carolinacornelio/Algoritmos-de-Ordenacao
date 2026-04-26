#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils.h"
#include "benchmark.h"
#include "insertion_sort/insertion_sort.h"

// int tamanhos[] = {1000, 10000, 100000};

int main() {
    srand(time(NULL));

    printf("\n%-15s | %-7s | %-10s | %-10s | %-12s | %-10s\n",
       "Algoritmo", "Tamanho", "Estado", "Tempo (ms)", "Comparacoes", "Trocas");

    printf("--------------------------------------------------------------------------\n");

    testarUmaVez("Insertion Sort", insertionSort, 10, 0); // aleatorio 
    // testarUmaVez("Insertion Sort", insertionSort, 10, 1); // ordenado 
    // testarUmaVez("Insertion Sort", insertionSort, 10, 2); // inverso 
    return 0;
}