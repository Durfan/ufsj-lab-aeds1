// Faça um programa que leia quatro números inteiros a,b,x e y, que serão as dimensões de duas matrizes.
// Em seguida:
// • Usando as dimensões e valores fornecidos pelo usuário, crie e preenche as duas matrizes.
// • Crie uma terceira matriz que seja o produto das duas matrizes criadas anteriormente.

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a,b,x,y;
    int i,j;
    int col_ab, col_xy, col_abxy;
    int *matriz_ab;
    int *matriz_xy;
    int *produto_abxy;

    printf ("Digite a de (A x b): ");
    scanf ("%d", &a);
    printf ("Digite b de (a x B): ");
    scanf ("%d", &b);

    printf ("Digite x de (X x y): ");
    scanf ("%d", &x);
    printf ("Digite y de (x x Y): ");
    scanf ("%d", &y);

    matriz_ab = (int *) malloc(a*b * sizeof(int));
    matriz_xy = (int *) malloc(x*y * sizeof(int));
    produto_abxy = (int *) malloc( (a*b)*(x*y) * sizeof(int));

    col_ab=b;
    for ( i=1; i<=a; i++) {
        for (j=1; j<=b; j++ ) {
            printf ("matriz(ab) [%d][%d]: ", i, j);
            scanf ("%d", matriz_ab+(i-1)*col_ab+j);
        }
    }

    printf("\n\n");

    col_xy=y;
    for ( i=1; i<=x; i++) {
        for (j=1; j<=y; j++ ) {
            printf ("matriz(xy) [%d][%d]: ", i, j);
            scanf ("%d", matriz_xy+(i-1)*col_xy+j);
        }
    }

    printf("\nLeitura AB: \n");
    
    col_ab=b;
    for ( i=1; i<=a; i++) {
        for (j=1; j<=b; j++ ) {
            printf ("%d ", *(matriz_ab+(i-1)*col_ab+j) );
            if ( j==col_ab ) printf("\n");
        }
    }

    printf("\n\nLeitura XY: \n");
    
    col_xy=y;
    for ( i=1; i<=x; i++) {
        for (j=1; j<=y; j++ ) {
            printf ("%d ", *(matriz_xy+(i-1)*col_xy+j) );
            if ( j==col_xy ) printf("\n");
        }
    }

    printf("\nProduto AB * XY: \n");

    col_abxy=x*y;
    for ( i=1; i<=a*b; i++) {
        for (j=1; j<=x*y; j++ ) {
            produto_abxy[(i-1)*col_abxy+j] = (*(matriz_ab+(i-1)*col_ab+j)) * (*(matriz_xy+(i-1)*col_xy+j) );
        }
    }

    for ( i=1; i<=a*b; i++) {
        for (j=1; j<=x*y; j++ ) {
            printf ("%d ", *(produto_abxy+(i-1)*col_abxy+j) );
            if ( j==col_abxy ) printf("\n");
        }
    }
    

    free(matriz_ab);
    free(matriz_xy);
    free(produto_abxy);

    return 0;
}