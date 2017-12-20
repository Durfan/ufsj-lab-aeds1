//
//  prob5.c
//  
//
//  Created by Pablo Cecilio on 20/10/2017.
//

#include <stdio.h>

#define TAM 10

int main() {
    int m[TAM][TAM], v[TAM];
    int i, j;
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf ("m[%d][%d]= ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    for (i=0; i<TAM; i++) {
        v[i]=0;
        for (j=0; j<TAM; j++) {
            v[i]+=m[i][j];
        }
    }
    
    printf ("\nMatriz ------------------------\n");
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf ("%d\t", m[i][j]);
        }
        printf ("x %d\n", v[i]);
    }
    
    printf ("\nMatriz x Vetor ----------------\n");
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf ("%d\t", m[i][j]*v[i]);
        }
        printf ("\n");
    }
    printf ("\n");
}
