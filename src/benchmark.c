#include <stdio.h>
#include <stdlib.h>
#include "benchmark.h"

void testarUmaVez(const char *nome,
                  void (*algoritmo)(int[], int, Resultado *),
                  int *vetor,
                  int tamanho,
                  int tipo)
{

   Resultado r;

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

}