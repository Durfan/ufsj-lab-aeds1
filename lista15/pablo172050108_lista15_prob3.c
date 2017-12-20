// Escreva uma função que receba como parâmetro o nome de um
// arquivo texto e retorne quantas vogais esse arquivo possui.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void VOGAIS (char file[50]);

int main (void) {
  char file[50];

  system("clear");
  printf("Nome do arquivo: ");
  scanf ("%s", file);

  VOGAIS(file);

  return 0;
}

void VOGAIS (char file[50]) {
  char c;
  char vogais[10] = "aeiouAEIOU";
  int i,n_vogais=0;

  FILE *fp;
  fp = fopen ( file,"r" );

  if ( fp == NULL ) {
    printf("Arquivo nao encontrado.\n");
    exit(1);
  }

  while (!feof(fp)) {
    c = fgetc(fp);
    for (i=0; i<10; i++) {
      if ( c==vogais[i] ) n_vogais++;
    }
  }

  printf("Vogais no arquivo: %d\n", n_vogais);

  fclose(fp);
}
