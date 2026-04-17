#include <stdio.h>
#include <stdlib.h>

// Mescla dois subarrays de arr[].
// O primeiro subarray é arr[l..m]
// O segundo subarray é arr[m+1..r]
void merge(int arr[], int l, int m, int r){
    
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Mescla os arrays temporários de volta em arr[l..r
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver algum
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver algum
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// l é o índice esquerdo e r é o índice direito do sub-array de arr a ser ordenado
void mergeSort(int arr[], int l, int r){
    
    if (l < r) {
        int m = l + (r - l) / 2;

        // Ordena a primeira e a segunda metade
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

// Código principal
int main() {
    
    int arr[] = {38, 27, 43, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Array ordenado: ");
    mergeSort(arr, 0, arr_size - 1);
    int i;
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}