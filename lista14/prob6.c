// Faça um programa que leia um inteiro n e:
// • Crie e leia um vetor v de n posições;
// • Crie um outro vetor, denominado p, contendo somente
//   os números pares do vetor criado anteriormente (i.e., v);
// • Crie um outro vetor, denominado i, contendo somente
//   os números ímpares do vetor criado anteriormente (i.e., v);

#include <stdio.h>
#include <stdlib.h>


int main (void) {
  int *vet, *p, *i;
  int j, pares=0, impares=0, tam;

  while ( tam<=0 ) {
    printf ("Tamanho do vetor=");
    scanf ("%d", &tam);
  }

  vet = (int *) malloc(tam * sizeof(int));

  for ( j=0; j<tam; j++ ) {
    printf ("Valor %d=", j);
    scanf ("%d", (vet+j));
  }

  for ( j=0; j<tam; j++ ) {
    if ( *(vet+j)%2 == 0 ) pares++;
    else impares++;
  }

  p = (int *) malloc(   pares * sizeof(int) );
  i = (int *) malloc( impares * sizeof(int) );

  for ( j=0; j<tam; j++ ) {
    if ( *(vet+j)%2 == 0 ) p[j] = *(vet+j);
    if ( *(vet+j)%2 != 0 ) i[j] = *(vet+j);
  }

  printf ("\nPares: ");
  for ( j=0; j<pares; j++ ) {
    printf ("%d ", *(p+j));
  }
  printf ("\nImpares: ");
  for ( j=0; j<impares; j++ ) {
    printf ("%d ", *(i+j));
  }

  printf ("\n\n");

  free(vet);
  free(p);
  free(i);
  
  return 0;
}
