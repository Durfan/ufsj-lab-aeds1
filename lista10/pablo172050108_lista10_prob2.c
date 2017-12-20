// Faça uma função recursiva que receba como parâmetro um valor inteiro n e gere como saída
// um triângulo lateral formado por asteriscos conforme mostrado abaixo para n = 4.
//  *
//  **
//  ***
//  ****
//  ***
//  **
//  *

#include <stdio.h>

void UP(int i, int n) {
  int j;
  for (j=0; j<=i; j++) printf("!");
  printf("\n");
  if (n>1) UP(i+1,n-1);
}

void DOWN(int n) {
  int i;
  for (i=1; i<n; i++) printf("!");
  printf("\n");
  if (n>2) DOWN(n-1);
}

int main(void) {
  int n;
  printf("N=");
  scanf("%d", &n);
  UP(0,n);
  DOWN(n);
}