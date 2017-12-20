// Faça um programa que leia do usuário o nome de um arquivo texto. Em seguida,
// mostre na tela quantas linhas esse arquivo possui.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
  char file[50];
  char linha[100];
  int  linhas=-1;

  system("clear");
  printf("Nome do arquivo: ");
  scanf ("%s", file);

  FILE *fp;
  fp = fopen ( strcat(file,".txt"),"r" );

  if ( fp == NULL ) {
    printf("Arquivo nao encontrado.\n");
    exit(1);
  }

  while (!feof(fp)) {
    fgets(linha,100,fp);
    linhas++;
  }

  printf("Linhas: %d\n\n",linhas);

  fclose(fp);
  return 0;
}
