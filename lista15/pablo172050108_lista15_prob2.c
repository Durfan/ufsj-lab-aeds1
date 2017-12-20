// Escreva uma programa que leia do usuário os nomes de dois arquivos texto.
// Em seguida, o programa deve criar um terceiro arquivo texto com o conteúdo
// dos dois primeiros juntos (o conteúdo do primeiro arquivo seguido do conteúdo do segundo).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
  char file_1[50];
  char file_2[50];
  char linha[100];

  system("clear");
  printf("Nome do 1 arquivo: ");
  scanf ("%s", file_1);
  printf("Nome do 2 arquivo: ");
  scanf ("%s", file_2);

  FILE *fp1, *fp2, *fp12;
  fp1  = fopen ( file_1,"r" );
  fp2  = fopen ( file_2,"r" );
  fp12 = fopen ( "file1_file2.txt", "a");

  if ( fp1 == NULL || fp2 == NULL ) {
    printf("Um dos arquivos nao foi encontrado.\n\n");
    exit(1);
  }

  if ( fp12 == NULL ) {
    printf("\n\"file1_file2.txt\" nao encontrado.\n\n");
    exit(1);
  }

  while (!feof(fp1)) {
    fgets(linha,100,fp1);
    fputs(linha,fp12);
  }

  while (!feof(fp2)) {
    fgets(linha,100,fp2);
    fputs(linha,fp12);
  }

  fclose(fp1);
  fclose(fp2);
  fclose(fp12);
  return 0;
}
