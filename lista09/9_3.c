// Elabore uma função recursiva que imprima uma string ao contrário.
// Pablo Cecilio 172050108

#include <stdio.h>
#include <string.h>

#define TAM 50

void INVERTE(char *a);

int main(void) {

    char frase[TAM];

    printf("Frase: ");
    fgets(frase,TAM,stdin);

    INVERTE(frase);
    printf("\n");
}

void INVERTE(char *a) {
    if (*a) {
    INVERTE(a+1);
    printf("%c", *a);
    }
}