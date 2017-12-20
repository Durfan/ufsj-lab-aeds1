// Faça um programa que mostre o tamanho em bytes de cada um
// dos seguintes tipos de dados: char, int, float, double, long.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf ("  Tamanho char: %lu\n", sizeof(char));
  printf ("   Tamanho int: %lu\n", sizeof(int));
  printf (" Tamanho float: %lu\n", sizeof(float));
  printf ("Tamanho double: %lu\n", sizeof(double));
  printf ("  Tamanho long: %lu\n", sizeof(long));

  return 0;
}
