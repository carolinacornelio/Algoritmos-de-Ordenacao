#include <stdio.h>
#include <stdlib.h>
#include "benchmark.h"

void testarUmaVez(const char *nome,
                  void (*algoritmo)(int[], int, Resultado *),
                  int tamanho,
                  int tipo)
{

   int *vetor = (int *)malloc(tamanho * sizeof(int));
   Resultado r;

   // tipo: 0 = aleatorio, 1 = ordenado, 2 = inverso
   if (tipo == 0)
      gerarAleatorio(vetor, tamanho);
   if (tipo == 1)
      gerarOrdenado(vetor, tamanho);
   if (tipo == 2)
      gerarInverso(vetor, tamanho);

   executarTeste(algoritmo, vetor, tamanho, &r);

   char *estado;
   if (tipo == 0)
      estado = "Aleatorio";
   if (tipo == 1)
      estado = "Ordenado";
   if (tipo == 2)
      estado = "Inverso";

   printf("%-15s | %-7d | %-10s | %-10.6f | %-12lld | %-10lld\n",
          nome, tamanho, estado,
          r.tempo * 1000, r.comparacoes, r.trocas);


   free(vetor);
}