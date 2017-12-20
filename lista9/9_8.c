// O hiperfatorial de um número n, denotado por H(n) é calculado como a seguir:
// H(n) = 1^1 * 2^2 * 3^3 ... (n-1)^(n-1) * n^n
// Faça uma função recursiva que receba um número inteiro n e retorne o hiperfatorial desse número.
// Pablo Cecilio 172050108

#include <stdio.h>
// #include <math.h>

double POTENCIA (double b, int e)
{
    if (e == 0) return 1;
    if (e == 1) return b;
    return b * POTENCIA(b, e-1);
}

long double HIPER (unsigned long n) {
    if (n == 0) return 1;
    return HIPER(n-1)*POTENCIA(n,n);
//    return HIPER(n-1)*powl(n,n);
}

int main (void) {
    unsigned long n;
    printf ("N=");
    scanf ("%ld", &n);
    printf ("%.0Lf\n", (long double)HIPER(n));
}