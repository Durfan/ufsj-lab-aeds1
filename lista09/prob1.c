// Faça um programa que leia um vetor de números inteiros. Em seguida, implemente
// um função recursiva que calcule a soma dos elementos do vetor.
// Pablo Cecilio 172050108

#include <stdio.h>

int SOMA (int v[], int n) {
  if (n==0) return v[0];
  return v[n]+SOMA(v, n-1);
}


int main (void) {
  int n=0, v[100];

  printf ("Digite 0 para sair:\n");

  while (1) {
    printf ("v[%d]=", n);
    scanf ("%d", &v[n]);
    if (v[n] == 0) break;
    else n++;
  }

  printf("%d\n",SOMA(v,n));

}
