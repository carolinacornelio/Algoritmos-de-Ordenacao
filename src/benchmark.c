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

   // Preparando o vetor comforme o cenario escolhido
   switch (tipo)
   {
   case 0:
      gerarAleatorio(vetor, tamanho);
      estado = "Aleatorio";
      break;

   case 1:
      gerarAleatorio(vetor, tamanho);
      ordenarVetor(vetor, tamanho);
      estado = "Ordenado";
      break;

   case 2:
      gerarAleatorio(vetor, tamanho);
      ordenarVetor(vetor, tamanho);
      inverterVetor(vetor, tamanho);
      estado = "Inverso";
      break;

   default:
      estado = "Desconhecido";
   }
   executarTeste(algoritmo, vetor, tamanho, &r);

   printf("%-15s | %-7d | %-10s | %-10.6f | %-12lld | %-10lld\n",
          nome, tamanho, estado,
          r.tempo * 1000, r.comparacoes, r.trocas);
}
