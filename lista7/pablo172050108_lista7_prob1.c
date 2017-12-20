//
//  prob1.c
//  
//
//  Created by Pablo Cecilio on 13/10/2017.
//

#include <stdio.h>

void MAIOR (int m[][4]) {
    int i, j, maior=0;
    for ( i=0; i<=3; i++ ) {
        for ( j=0; j<=3; j++ ) {
            maior=m[i][j];
        }
    }
    printf ("\nMaior Valor = %d\n", maior);
}

void LER (int m[][4]) {
    
    int i, j, maior;
    for ( i=0; i<=3; i++ ) {
        for ( j=0; j<=3; j++ ) {
            printf ("%d\t", m[i][j]);
            }
        printf ("\n");
    }

}


int main()
{
    int mat[4][4], i, j, maior;
    
    for ( i=0; i<=3; i++ ) {
        for ( j=0; j<=3; j++ ) {
        
            printf ("mat[%d][%d] = ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }
    
    printf ("\nValores Lidos:\n\n");
    LER(mat);
    MAIOR(mat);

}
