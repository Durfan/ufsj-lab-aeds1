// Escreva um programa que contenha um vetor de inteiros contendo cinco elementos.
// Utilizando apenas aritmética de ponteiros, leia esse vetor do teclado e
// imprima o dobro de cada valor lido.

#include <stdio.h>
#include <stdlib.h>

 
int main (void) {
    int i;
    int vetor[5];
    int *dobro;
 
    for ( i=0; i<5; i++ ) {
        printf ("vetor[%d]=", i);
        scanf  ("%d", &vetor[i]);
    }

    dobro = vetor;
 
    for ( i=0 ; i<5 ; i++ ) {
        printf ("vetor[%d]= %d\n", i, *(dobro+i)*2);

    } 
 
    return 0;
}