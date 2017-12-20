// Faça um programa que leia dois vetores, X e Y , com dez números inteiros cada.
// Os valores devem ser fornecidos pelo usuário. Em seguida, o programa deve calcular o seguinte vetor:
// A união de X e Y , ou seja, todos os elementos que aparecem tanto em X quando em Y sem repeticoes.
// Por exemplo, considerando um vetor X {3, 8, 4, 2, 1, 6, 8, 7, 11, 9}
// e um vetor Y {2, 1, 5, 12, 3, 0, 1, 4, 5, 6},
// o vetor resultante (união) deve conter os seguinte elementos: {3, 8, 4, 2, 1, 6, 7, 11, 9, 5, 12, 0}.

#include <stdio.h>

#define TAM 10

void UNIAO (int a[], int b[]);

int main() {
    
    int x[TAM], y[TAM], i;
    
    printf ("\nValores para o vetor X:\n");
    for (i=0; i<TAM; i++) {
        printf ("x[%d]=", i);
        scanf ("%d", &x[i]);
    }
    
    printf ("\nValores para o vetor Y:\n");
    for (i=0; i<TAM; i++) {
        printf ("y[%d]=", i);
        scanf ("%d", &y[i]);
    }
    
    UNIAO(x,y);
    
}
    

void UNIAO (int a[], int b[]) {
    
    int uniao[2*TAM];
    int aux[2*TAM], i, j, temp, igual=0, n=0;
    
    for (i=0; i<2*TAM; i++) {
        if (i<TAM) aux[i]=a[i];
        if (i>=TAM) aux[i]=b[i-TAM];
    }
    
    for (i=0; i<2*TAM; i++) {
        if (i==0) {
            uniao[n]=aux[i];
            n++;
        } else {
            igual=0;
            for (j=0; j<n; j++) {
                if(aux[i] == uniao[j]) {
                    igual=1;
                }
            }
            if (igual==0) {
                uniao[n] = aux[i];
                n++;
            }
        }
    }
    
    for (i=0; i<n; i++) {
        for (j=0;j<n;j++) {
            if (uniao[j]>uniao[i]) {
                temp=uniao[j];
                uniao[j]=uniao[i];
                uniao[i]=temp;
            }
        }
    }
    
    printf ("\n%d elementos no vetor uniao[] = {", n);
    for (i=0; i<n; i++) printf (" %d", uniao[i]);
    printf (" }\n\n");
    
}