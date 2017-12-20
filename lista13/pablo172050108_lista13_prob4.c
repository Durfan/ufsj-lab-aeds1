// Crie uma função que receba como parâmetro um vetor e o imprima.
// Não utilize índices para percorrer o vetor, somente aritmética de ponteiros.


#include <stdio.h>
#include <stdlib.h>

int PRINTVETOR ( int *vet );

int main(void) {
    int *vet;
    vet = (int*)malloc(sizeof(int)*10);
    int vetor[10]={1,99,30,4,20,6,7,8,9,10};
    
    PRINTVETOR (vetor);

    return 0;
}

int PRINTVETOR ( int *vet ) {
    
    int *ptr = vet;
    int i;
   
    printf ("%d\n", *ptr); *ptr++; // 1
    printf ("%d\n", *ptr); *ptr++; // 2
    printf ("%d\n", *ptr); *ptr++; // 3
    printf ("%d\n", *ptr); *ptr++; // 4
    printf ("%d\n", *ptr); *ptr++; // 5
    printf ("%d\n", *ptr); *ptr++; // 6
    printf ("%d\n", *ptr); *ptr++; // 7
    printf ("%d\n", *ptr); *ptr++; // 8
    printf ("%d\n", *ptr); *ptr++; // 9
    printf ("%d\n", *ptr); *ptr++; // 10
    

    return 0;
}