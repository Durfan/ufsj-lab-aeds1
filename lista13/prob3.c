// Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
// Em seguida, compare os endereços dessas variáveis e exiba o conteúdo do maior endereço.

#include <stdio.h>

int main(void) {
    int a=0;
    int b=100000;
    int *pa = &a;
    int *pb = &b;

    printf ("End Hex Maior= %p\n\n", pa > pb ? pa : pb);

    printf ("End Hex de A= %p Valor de A= %d\n", pa, a);
    printf ("End Hex de B= %p Valor de B= %d\n", pb, b);

    return 0;
}