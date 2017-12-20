// Faça um programa que leia um arquivo contendo uma lista de compras. Cada linha
// do arquivo possui um nome, quantidade e valor unitário do produto. O programa
// então exibe o total da compra.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
  char  produto[50];
  int   quantidade;
  float preco;
  float total=0;

  FILE *fp;
  fp = fopen ( "compras.txt","r" );

  if ( fp == NULL ) {
    printf("Arquivo nao encontrado.\n");
    exit(1);
  }

  printf("\n\n");
  while ( 1 ) {
    fscanf(fp, "%s %d %f", produto, &quantidade, &preco);
    printf("%s\t%d\t%.2f\n", produto, quantidade, preco);
    total+=preco;
    if ( !feof(fp)) break;
  }
  printf("\nTotal: %.2f\n\n", total);

  fclose(fp);
  return 0;
}
