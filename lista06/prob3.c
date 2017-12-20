//
//  prob3.c
//  
//
//  Created by Pablo Cecilio on 06/10/2017.
//

#include <stdio.h>
#include <string.h>

int main() {
    int i,tamanho;
    char text[50];
    printf("Digite : ");
    fgets(text, 50, stdin);
    tamanho=strlen(text);
    for (i=tamanho; i>=0; i--) {
    printf("%c", text[i]);
    }
printf("\n");
    
}
