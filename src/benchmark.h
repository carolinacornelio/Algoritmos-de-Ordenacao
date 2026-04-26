#ifndef BENCHMARK_H
#define BENCHMARK_H

#include "utils.h"

void testarUmaVez(const char *nome,
                  void (*algoritmo)(int[], int, Resultado*),
                  int tamanho,
                  int tipo);
#endif