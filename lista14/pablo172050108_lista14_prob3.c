// Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
// seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário
// e o imprima. (Note que o usuário deve fornecer um valor maior que zero).

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, tam=0;
  int *p;

  while ( tam<=0 ) {
    printf ("Tamanho do vetor=");
    scanf ("%d", &tam);
  }

  p = (int *) malloc(tam * sizeof(int));

  for ( i=0; i<tam; i++ ) {
    printf ("Valor %d=", i);
    scanf ("%d", (p+i));
  }

  printf ("\n\nValores Lidos:\n\n");

  for ( i=0; i<tam; i++ ) {
    printf ("Valor %d= %d\n", i, *(p+i));
  }

  free(p);
  p=NULL;

}
