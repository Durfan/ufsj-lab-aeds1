// Faça uma função recursiva que receba um número inteiro positivo par n 
// e imprima todos os números pares de 0 até n em ordem decrescente.
// Pablo Cecilio 172050108

#include <stdio.h>

int PARES(int n);

int main(void) {

    int n;
    printf("N= ");
    scanf("%d", &n);
    while (n%2 != 0) {
        printf ("Nao e par, Digite novo valor: ");
        scanf("%d", &n);
    }

    PARES(n);
}

int PARES(int n) {
    if (n==0) {
        printf("%d\n",n);
        return n;
    }
    if (n%2 == 0) {
        printf("%d ",n);
        return PARES(n-2);
    }
}