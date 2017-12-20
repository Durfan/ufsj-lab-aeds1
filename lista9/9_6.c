// Faça uma função recursiva que receba um número inteiro positivo par n
// e imprima todos os números pares de 0 até n em ordem crescente.
// Pablo Cecilio 172050108

#include <stdio.h>

int PARES(int i,int n);

int main(void) {

    int n;
    printf("N= ");
    scanf("%d", &n);
    while (n%2 != 0) {
        printf ("Nao e par, Digite novo valor: ");
        scanf("%d", &n);
    }

    PARES(0,n);
}

int PARES(int i,int n) {
    if (i==n) {
        printf("%d\n",n);
        return n;
    }
    if (i%2 == 0) {
        printf("%d ",i);
        return PARES(i+2,n);
    }
}