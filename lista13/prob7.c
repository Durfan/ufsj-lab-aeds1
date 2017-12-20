// Implemente um programa que crie e leia do teclado os valores para um vetor de tamanho 10.
// O programa deve incluir uma função que recebe o vetor criado anteriormente como parâmetro e
// conta a quantidade de números pares, impares e negativos. O vetor deve ser percorrido utilizando
// aritmética de ponteiros. Esses valores devem ser retornados via parâmetros por referência.
// A função main deve imprimir esses valores.


#include <stdio.h>
#include <stdlib.h>

void QUANTIFICA (int *ptr, int *pares, int *impares, int *negativos);

 
int main (void) {
    int i;
    int vetor[10];
    int *ptr;
    int pares=0, impares=0, negativos=0;
 
    for ( i=0; i<10; i++ ) {
        printf ("vetor[%d]=", i);
        scanf  ("%d", &vetor[i]);
    }
 
    ptr = vetor;
 
    QUANTIFICA (ptr,&pares,&impares,&negativos);

    printf ("Pares= %d\n", pares);
    printf ("Impares= %d\n", impares);
    printf ("Negativos= %d\n", negativos);

    return 0;
}

void QUANTIFICA (int *ptr, int *pares, int *impares, int *negativos) {
    int i;
    for ( i=0 ; i<10 ; i++ ) {
        if ( *(ptr+i)%2==0 && *(ptr+i)>=0 ) {
            *pares+=1;
        }
        else {
            *impares+=1;
        }
        if ( *(ptr+i)<0 ) {
            *negativos+=1;
        }
    } 
}