//
//  prob5.c
//  
//
//  Created by Pablo Cecilio on 13/10/2017.
//

#include <stdio.h>

void SOMA (int a[][5]) {
    int i, j, total=0;
    for ( i=0; i<=4; i++ ) {
        for ( j=0; j<=4; j++ ) {
            if (i<=j) {
                printf ("+%d\t", a[i][j]);
                total+=a[i][j];
            }
            else
                printf ("0\t");
        }
    printf ("\n");
    }
    printf ("= %d\n", total);
    
}

int main()
{
    int mat[5][5],i,j;
    
    for ( i=0; i<=4; i++ )
        for ( j=0; j<=4; j++ )
        {
            printf ("Valor[%d][%d] = ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    
    
    for ( i=0; i<=4; i++ ) {
        for ( j=0; j<=4; j++ ) {
            printf ("%d\t", mat[i][j]);
        }
        printf ("\n");
    }
    
    printf("\nSomando:\n\n");
    SOMA(mat);

}
