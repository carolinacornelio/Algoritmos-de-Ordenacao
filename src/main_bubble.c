#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils.h"
#include "benchmark.h"
#include "bubblesort/bubble_sort.h"

// int tamanhos[] = {1000, 10000, 100000};

int main() {
    srand(time(NULL));

    printf("\n%-15s | %-7s | %-10s | %-10s | %-12s | %-10s\n",
       "Algoritmo", "Tamanho", "Estado", "Tempo (ms)", "Comparacoes", "Trocas");

    printf("--------------------------------------------------------------------------\n");

    testarUmaVez("Bubble Sort", bubbleSort, 10, 0); // aleatorio
    // testarUmaVez("Bubble Sort", bubbleSort, 1000, 1); // ordenado 
    // testarUmaVez("Bubble Sort", bubbleSort, 1000, 2); // inverso

    return 0;
}