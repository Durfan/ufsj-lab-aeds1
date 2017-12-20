// Faça um programa que leia números positivos e os converta em binário. Cada número
// binário deverá ser salvo em uma linha de um arquivo texto. O programa termina quando o usuário
// digitar um número negativo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long BINARIO (long n) {
    int r; 
    long bin = 0, i = 1;
    while( n != 0 ) {
        r = n%2;
        n = n/2;
        bin+=(r*i);
        i = i*10;
    }
    return bin;
}

int main (void) {
    long n;

    FILE *fp;
    fp = fopen ( "binarios.txt", "a");

    if ( fp == NULL ) {
    printf("Arquivo nao encontrado.\n");
    exit(1);
    }

    system("clear");
    while (1) {
    printf("Numero: ");
    scanf("%ld", &n);
    if ( n<0 ) break;
    fprintf(fp,"%ld\n", BINARIO(n));
    }

  fclose(fp);
  return 0;
}
