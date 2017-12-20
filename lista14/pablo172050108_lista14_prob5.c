// Faça um programa que leia um inteiro n e:
// • Crie e leia um vetor de n posições;
// • Encontre a moda do vetor (número que aparece mais vezes) e quantas vezes ele aparece.
// (Caso exista mais de uma moda, retorne a primeira encontrada.)

#include <stdio.h>
#include <stdlib.h>

int CONTA_ELEM (int *vet, int tam);
int *MODA (int *vet, int tam);

int main (void) {
  int i,n,tam=0;
  int *vet;
  int *v_moda=NULL;

  while ( tam<=0 ) {
    printf ("Tamanho do vetor=");
    scanf ("%d", &tam);
  }

  vet = (int *) malloc(tam * sizeof(int));

  for ( i=0; i<tam; i++ ) {
    printf ("Valor %d=", i);
    scanf ("%d", (vet+i));
  }

  n = CONTA_ELEM (vet, tam);
  v_moda = MODA (vet, tam);

  printf ("\nModa: ");

  for (i = 0; i < n; i++) printf ("%d ", *(v_moda + i) );

  printf ("\nn repetidos = %d\n\n", n);

  free(vet);
  return 0;
}


int CONTA_ELEM (int *vet, int tam) {
  int x;
  int i, j;
  int flag;

  x = 0;
  flag = 0;

  for ( i=0, j=i+1; i<(tam-1); i++,j++ ) {
    if ( *(vet+i) == *(vet+j) ) {
      if ( flag == 0 ) {
        x++;
        flag = 1;
      }
    }
    else flag = 0;
  }
  return x;
}


int *MODA (int *vet, int tam) {
  int n, flag;
  int *moda;
  int i, j, k;

  n = CONTA_ELEM (vet,tam);

  moda = (int *) malloc (n * sizeof (int) );

  k = flag = 0;

  for (i = 0, j = i + 1; i < (tam-1); i++, j++) {
    if (*(vet+i) == *(vet+j)) {
      if (flag == 0) {
        moda[k++] = *(vet+j);
        flag = 1;
      }
    }
    else flag = 0;
  }
  return moda;
}
