
// Elabore uma função recursiva que receba como parâmetro um valor inteiro n e
// gere como saída n linhas com pontos de exclamação, conforme mostrado abaixo para n = 5.
// !
// !! 
// !!! 
// !!!! 
// !!!!!

#include <stdio.h>

void PE(int i, int n) {
    int j;
    for (j=0; j<=i; j++) printf("!");
    printf("\n");
    if (n>1) PE(i+1,n-1);
  }

int main(void) {
    int n;
    printf("N=");
    scanf("%d", &n);
    PE(0,n);
}