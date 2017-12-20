// Escreva um programa que leia 2 valores inteiros em duas variáveis e em seguida
// chame um função que receba as duas variáveis e troque o conteúdo das variáveis:
// ou seja, a função é chamada passando duas variáveis a e b, por exemplo, e após
// sua execução, a deve conter o valor de b e b deve conter o valor de a.

#include <stdio.h>

int TROCA ( int *p, int *q ); 

int main(void) {
    int a,b;
    int *p = &a;
    int *q = &b;

    printf ("Valor de A= ");
    scanf ("%d", &a);
    printf ("Valor de B= ");
    scanf ("%d", &b);       

    TROCA (p,q);

    printf ("A=%d / B=%d\n", *p, *q);

    return 0;
}

int TROCA ( int *p, int *q ) {
    int temp;  
    temp = *p;   
    *p = *q;   
    *q = temp;
    return 0;
}