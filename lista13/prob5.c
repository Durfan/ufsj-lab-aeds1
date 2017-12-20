// Faça um programa que leia do teclado um vetor de inteiro contendo 10 elementos.
// Em seguida, o programa deve encontrar o menor elemento do vetor utilizando apenas
// aritmética de ponteiros.


#include <stdio.h>
#include <stdlib.h>

 
int main (void) {
    int i;
    int vetor[10];
    int *menor, local=0;
 
    for ( i=0; i<10; i++ ) {
        printf ("vetor[%d]=", i);
        scanf  ("%d", &vetor[i]);
    }
 
    menor = vetor;
    *menor = *vetor;
 
    for ( i=0 ; i<10 ; i++ ) {
        if ( *(vetor+i) < *menor ) {
           *menor = *(vetor+i);
           local=i;
        }
    } 
 
    printf ("Menor no vetor[%d]= %d.\n", local, *menor);
    return 0;
}