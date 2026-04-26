#include "quick_sort.h"
// Inclui o cabeçalho onde estão as declarações das funções
// e a struct Resultado usada para contar comparações e trocas


// Função responsável por particionar o vetor
int partition(int v[], int low, int high, Resultado *r) {
    int pivot = v[high];
    // Define o pivô como o último elemento do vetor

    int i = low - 1;
    // Índice do "lado dos menores"
    // Tudo até i será menor que o pivô
    int temp;
    // Variável auxiliar para realizar trocas

    // Percorre o vetor do início até antes do pivô
    for (int j = low; j < high; j++) {
        r->comparacoes++;
        // Conta cada comparação feita

        if (v[j] < pivot) {
            // Se o elemento atual for menor que o pivô

            i++;
            // Avança o índice dos menores

            // Troca v[i] com v[j]
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            r->trocas++;
            // Conta a troca realizada
        }
    }

    // Após o loop, coloca o pivô na posição correta
    temp = v[i + 1];
    v[i + 1] = v[high];
    v[high] = temp;

    r->trocas++;
    // Conta a troca final do pivô

    return i + 1;
    // Retorna a posição final do pivô
}

// Função recursiva do Quick Sort
void quickSortRec(int v[], int low, int high, Resultado *r) {
    
    if (low < high) {
        // Só executa se houver mais de um elemento

        int pi = partition(v, low, high, r);
        // Particiona o vetor e obtém a posição do pivô

        // Ordena a parte à esquerda do pivô
        quickSortRec(v, low, pi - 1, r);

        // Ordena a parte à direita do pivô
        quickSortRec(v, pi + 1, high, r);
    }
}

// Função principal do Quick Sort (interface)
void quickSort(int v[], int n, Resultado *r) {
    quickSortRec(v, 0, n - 1, r);
    // Chama a função recursiva passando o vetor inteiro
}