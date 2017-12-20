// Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
// conter o número de matrícula do aluno, seu nome e as notas de três provas.
// Escreva um programa que mostre o tamanho em bytes dessa estrutura.

#include <stdio.h>
#include <stdlib.h>

struct aluno {
  char nome[50];
  int matricula;
  int nota_md;
  int nota_icc;
  int nota_ga;
};

int main(void) {

  struct aluno joao;

  printf ("Tamanho da struct: %lu\n", sizeof joao);

  return 0;
}
