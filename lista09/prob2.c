// Faça uma função recursiva que verifica se uma palavra é um palíndromo.
// Pablo Cecilio 172050108

#include <stdio.h>
#include <string.h>

#define TAM 10

int COMPARA(char *str,int i,int j);
void POLI(char *str);

int main(void) {
    
    char word[TAM];

    printf("Palavra: ");
    fgets(word,TAM,stdin);
    POLI(word);
    
}

int COMPARA(char *str,int i,int j) {
    if (i>j) return 1;
    else {
        if (str[i]!=str[j]) return 0;
        return COMPARA(str,i+1,j-1);
    } 
 }

void POLI(char *str) {
    int i=0, len=strlen(str)-2;
    if (COMPARA(str,i,len)==1) printf("SIM\n");
    else printf("NAO\n");
}
