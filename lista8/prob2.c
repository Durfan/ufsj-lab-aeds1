//
//  prob2.c
//  
//
//  Created by Pablo Cecilio on 20/10/2017.
//

#include <stdio.h>

#define TAM 2

void MULTI (int a[][TAM]);

int main() {
    int m[TAM][TAM], r[TAM][TAM], i, j, maior;
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf ("m[%d][%d]=", i, j);
            scanf ("%d", &m[i][j]);
        }
    }
    
    MULTI(m);
}

void MULTI (int a[][TAM]) {
    int r[TAM][TAM], i, j, maior;
    maior=a[0][0];
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            if (a[i][j]>maior) maior=a[i][j];
        }
    }
    
    printf ("\nMaior= %d\n", maior);
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            r[i][j]=a[i][j]*maior;
        }
    }
    
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            printf ("%d\t",r[i][j]);
        }
        printf ("\n");
    }
    
}
