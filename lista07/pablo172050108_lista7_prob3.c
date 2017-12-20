//
//  prob3.c
//  
//
//  Created by Pablo Cecilio on 13/10/2017.
//

#include <stdio.h>

void MAIORES (int a[][4]) {
    int i, j, n=0;
    
    for ( i=0; i<=3; i++) {
        for (j=0; j<=3; j++) {
            if (a[i][j]>10) {
                printf ("%d ", a[i][j]);
                n++;
            }
        }
        
    }
    
    printf ("sao maiores que 10\n");
    printf ("Total = %d valores maiores que 10\n", n);
}


int main()
{
    int mat[4][4],i,j;
    
    for ( i=0; i<=3; i++ ) {
        for ( j=0; j<=3; j++ ) {
            printf ("Valor[%d][%d] = ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }
    
    for ( i=0; i<=3; i++ ) {
        for ( j=0; j<=3; j++ ) {
            printf ("%d\t", mat[i][j]);
        }
    printf ("\n");
    }
    
    MAIORES(mat);

}
