# Comparação de Algoritmos de Ordenação

## 🏛️ Informações Institucionais
* **Universidade:** UNIVASF
* **Curso:** Ciência da Computação
* **Disciplina:** Metodologia Científica para Computação 
* **Professor(a):** Rodrigo Yoshio Tamae
* **Equipe:** Descomplica

## 📖 Sobre o Projeto
Este repositório contém os códigos-fonte e os dados gerados durante a Atividade Prática de Pesquisa da disciplina de Metodologia Científica para Computação. 

**O Cenário:** O estudo simula uma demanda de uma grande biblioteca universitária que necessita de uma funcionalidade para ordenar listas gigantescas de livros, alunos e empréstimos de forma eficiente. Como o sistema atual apresenta lentidão, nossa equipe aplicou o método científico para investigar, testar e definir qual é o melhor algoritmo de ordenação para resolver esse problema.

**Objetivos do Estudo:**
* Diferenciar pesquisa bibliográfica de experimental.
* Coletar e analisar dados quantitativos de desempenho.
* Relacionar o desempenho empírico dos algoritmos testados com suas complexidades teóricas (Notação Big O).

## ⚙️ Algoritmos Implementados
Os testes foram realizados utilizando a linguagem de programação **ANSI C**. Foram avaliados quatro algoritmos divididos em duas categorias de complexidade:

**Complexidade Quadrática $O(n^2)$:** 
* Bubble Sort 
* Insertion Sort 

**Complexidade Logarítmica $O(n \log n)$:** 
* Merge Sort
* Quick Sort

## 🔬 Metodologia e Cenários de Teste
Para garantir o rigor científico, os algoritmos foram modificados (instrumentados) para registrar suas operações internas. Eles foram submetidos a vetores numéricos inteiros nas seguintes condições:

**Cargas de Dados (Tamanhos do Vetor):**
* **Pequeno:** 1.000 elementos 
* **Médio:** 10.000 elementos
* **Grande:** 100.000 elementos 

**Estados Iniciais do Vetor:**
* **Ordenado:** Ordem crescente (representando o melhor caso para alguns algoritmos)
* **Inversamente Ordenado:** Ordem decrescente (representando o pior caso para alguns algoritmos)
* **Aleatório:** Ordem randômica (representando o caso médio, executado 10 vezes para extração de média)

**Métricas Analisadas:**
1. **Tempo de Execução:** Medido em milissegundos (ms)
2. **Comparações:** Quantidade de vezes que dois elementos foram comparados
3. **Trocas/Movimentações:** Quantidade de vezes que elementos mudaram de posição

## 📂 Estrutura do Repositório
* `src/`: Códigos-fonte dos 4 algoritmos em C, instrumentados com os contadores de tempo, comparações e trocas.
* `data/`: Planilhas contendo os dados brutos e resultados das rodadas de testes.
* `docs/`: Relatório técnico-científico da pesquisa.

---
*Projeto desenvolvido ao longo das semanas de março a junho, conforme cronograma da disciplina.
