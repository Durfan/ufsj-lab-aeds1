#include <stdio.h>
#include <stdlib.h>

struct Quitanda {
    int   codigo;
    char  nome[25];
    float preco;
    int   quantidade;
};

int main (void) {

    int i, codigo, qtd, estoque;
    struct Quitanda produtos[5];

    for ( i=0; i<5; i++ ) {
        printf ("\nProduto %d\n", i+1);
        printf ("----------------------------------------------\n");
        printf ("Codigo: ");
        scanf  ("%d", &produtos[i].codigo);
        printf ("Nome: ");
        scanf  (" %s", produtos[i].nome);
        printf ("Preco: ");
        scanf  ("%f", &produtos[i].preco);
        printf ("Quantidade: ");
        scanf  ("%d", &produtos[i].quantidade);
    }

    while ( 1 ) {

        system("clear");
        printf ("COD\tNOME\tPRECO\tQTD\n");
        for ( i=0; i<5; i++ ) {
            printf ("%d\t%s\t%.2f\t%d\n", produtos[i].codigo, produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
        }

        printf ("\n\n------------------------------------ 0 (Sair) --\n");
        printf ("Digite o codigo: ");
        scanf  ("%d", &codigo);
        printf ("informe a quantidade: ");
        scanf  ("%d", &qtd);

        for ( i=0; i<5; i++ ) {
            if ( codigo == produtos[i].codigo ) {
                if ( qtd <= produtos[i].quantidade && qtd>0 ) produtos[i].quantidade-=qtd;            
                else printf ("Quantidade insufucuente no estoque\n");
                if ( !produtos[i].quantidade ) {
                    printf ("Produto em falta!\n");
                    printf ("\n Pressione [Enter] para continuar.");
                    while (getchar()!='\n');
                    getchar();
                }
            }
        }
    }
}