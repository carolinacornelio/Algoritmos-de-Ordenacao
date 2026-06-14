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
   char *estado;

   switch (tipo)
   {
   case 0:
      gerarAleatorio(vetor, tamanho);
      estado = "Aleatorio";
      break;

   case 1:
      gerarOrdenado(vetor, tamanho);
      estado = "Ordenado";
      break;

   case 2:
      gerarInverso(vetor, tamanho);
      estado = "Inverso";
      break;

   default:
      estado = "Desconhecido";
      break;
   }

   executarTeste(algoritmo, vetor, tamanho, &r);

   printf("%-15s | %-7d | %-10s | %-10.6f | %-12lld | %-10lld\n",
          nome, tamanho, estado,
          r.tempo * 1000, r.comparacoes, r.trocas);

}
