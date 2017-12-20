// Faça uma função recursiva que calcule e retorne o número neperiano e, e=2,71828183,
// usando a seguinte série: e=Somatorio(N/n=0) 1/n!= 1/0! + 1/1! +1/2! + 1/3! ...
// A função deve receber como parâmetro o número de termos que serão somados, N.
// Note que quanto maior esse número, maior próxima do valor e estará a resposta.

#include <stdio.h>

float FAT(int n) {
    if ((n==1) || (n==0)) return 1;               
    else
    return FAT(n-1)*1.0/n;
}

float EULER (float n) {
    if (n==0) return 1;
    return EULER(n-1)+FAT(n);
}

// float DIETHISMOTHERFUCKERFUNCTIONFROMHELL (float n) {
//    int i, fatorial=1;
//    if (n==0) return 1;
//    for (i=1; i<=n; i++) {
//        fatorial*=i;
//     }
//    return DIETHISMOTHERFUCKERFUNCTIONFROMHELL (n-1)+1.0/fatorial;
// }

int main(void) {
    float n;
    while (n!=-1) {
        printf("\nN= ");
        scanf("%f",&n);
        printf("%.20f e=(2,71828183)",EULER(n));
    }
}

