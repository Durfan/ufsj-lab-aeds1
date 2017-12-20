// Elabore uma função recursiva que calcule a sequência:
// 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
// Pablo Cecilio 172050108

#include <stdio.h>

float FATORIAL(float s);
float SOMA(int n);

int main(void) {

    float n;
    printf("N= ");
    scanf("%f", &n);

    printf("Soma: %.2f\n", SOMA(n));
 
}

float FATORIAL(float s) {
    if (s<=2) return s;
    else return s*FATORIAL(s-1);
    }

float SOMA(int n) {
    float s=0;
    if (n==1) return 1;
    else {
        s+=(SOMA(n-1) + (1.0/FATORIAL(n)));
        return s;
    }
}