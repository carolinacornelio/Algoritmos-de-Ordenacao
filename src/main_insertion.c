#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils.h"
#include "benchmark.h"
#include "insertion_sort/insertion_sort.h"

int main() {
    int tamanho = 100000; // Deve ser o mesmo tamanho gerado no txt

    // 1. Pede espaço na memória para guardar os números
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    }

    // 2. Abre o arquivo de texto no modo leitura ("r" = read)
    FILE *arquivo = fopen("output/dados100000.txt", "r");
    if (arquivo == NULL) {
        printf("Erro: Arquivo 'dados100000.txt' nao encontrado!\n");
        printf("Rode o gerador.c primeiro para criar o arquivo.\n");
        free(vetor);
        return 1;
    }

    printf("Lendo %d numeros do arquivo 'dados100000.txt'...\n", tamanho);

    // 3. Lê linha por linha do .txt e guarda no nosso vetor
    for (int i = 0; i < tamanho; i++) {
        fscanf(arquivo, "%d", &vetor[i]);
    }
    fclose(arquivo);

    printf("Leitura concluida! Iniciando o benchmark...\n\n");

    // Cabeçalho bonito para a tabela 
    printf("%-15s | %-7s | %-10s | %-10s | %-12s | %-10s\n",
       "Algoritmo", "Tamanho", "Estado", "Tempo (ms)", "Comparacoes", "Trocas");
    printf("------------------------------------------------------------------------\n");

    // 4. Executa o teste de fato!
    // Passamos '0' no final só para a tabela imprimir "Aleatorio" no estado
    testarUmaVez("Insertion Sort", insertionSort, vetor, tamanho, 0);

    // 5. Limpa a bagunça
    free(vetor);

    printf("\n=== TESTE CONCLUIDO ===\n");
    return 0;
}