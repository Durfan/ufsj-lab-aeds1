//
//  prob1.c
//  
//
//  Created by Pablo Cecilio on 06/10/2017.
//

#include <stdio.h>

int main() {
    
    char text[10];
    int i;
    printf("Digite : ");
    fgets(text, 10, stdin);
    printf("Cinco primeiras letras da string:\n");
    for (i=0; i<5; i++) {
    printf("%c ", text[i]);
    }
    printf("\n");
    
}


