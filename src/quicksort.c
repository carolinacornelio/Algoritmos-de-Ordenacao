void swap(int* a, int* b);

// função de partição
int partition(int arr[], int low, int high) {
    
    // Escolhe o pivô
    int pivot = arr[high];
    
    // Índice do elemento menor e indica 
    // a posição correta do pivô encontrada até agora
    int i = low - 1;

    // Percorre arr[low..high] e move todos os elementos menores
    // para o lado esquerdo. Elementos de low até 
    // i são menores após cada iteração
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    // Move o pivô para depois dos elementos menores e
    // retorna a sua posição
    swap(&arr[i + 1], &arr[high]);  
    return i + 1;
}

// Implementação da função QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        
        // pi é o índice de retorno da partição do pivô
        int pi = partition(arr, low, high);

        // chamadas recursivas para elementos menores
        // e elementos maiores ou iguais
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array ordenado: ");
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}