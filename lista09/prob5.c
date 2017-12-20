// Faça uma função recursiva que receba um número inteiro positivo n e calcule o somatório dos números de 1 a n.
// Pablo Cecilio 172050108

#include <stdio.h>

int SOMA(int n);

int main(void) {

    int n;
    printf("N= ");
    scanf("%d", &n);

    printf("Soma: %.d\n", SOMA(n));
 
}

int SOMA(int n) {
    if (n>0) return n+SOMA(n-1);
    else return n;
}