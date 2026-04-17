#include <stdio.h>

// Função para ordenar o array usando insertion sort 
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move os elementos de arr[0..i-1] que são maiores que a chave (key) para uma posição à frente de sua posição atual 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Uma função utilitária para imprimir um array de tamanho n 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

// Método principal
int main() {
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array ordenado: ");
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}