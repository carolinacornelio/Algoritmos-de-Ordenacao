#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils.h"
#include "benchmark.h"
#include "quick_sort/quick_sort.h"

// int tamanhos[] = {1000, 10000, 100000};

int main() {
    srand(time(NULL));

    printf("\n%-15s | %-7s | %-10s | %-10s | %-12s | %-10s\n",
       "Algoritmo", "Tamanho", "Estado", "Tempo (ms)", "Comparacoes", "Trocas");

    printf("--------------------------------------------------------------------------\n");

    testarUmaVez("Quick Sort", quickSort, 1000, 0); // aleatorio
    // testarUmaVez("Quick Sort", quickSort, 1000, 1); // ordenado
    // testarUmaVez("Quick Sort", quickSort, 1000, 2); // inverso

    return 0;
}