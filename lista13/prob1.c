// Faça um programa que contenha um vetor de variáveis do tipo float contendo 10 elementos.
// Imprima o endereço de cada posição desse vetor (em hexadecimal e decimal).


#include <stdio.h>

int main(void) {
    int i;
    float var[10]= {1.34,2.1,3,4,5,6.3,7,8,9,10};

    for ( i=0; i<10; i++ ) {
        printf ("var[%d]=%.2f, / End.Hex= %x / End.Dec= %d\n", i,var[i] ,(unsigned int)&var[i], (unsigned int)&var[i]);
    }

    return 0;
}