//
//  prob2.c
//  
//
//  Created by Pablo Cecilio on 06/10/2017.
//

#include <stdio.h>

int main() {
    int i, count=0;
    char text[50];
    printf("Digite : ");
    fgets(text, 50, stdin);
    
    for (i=0; text[i] != '\0'; i++) {
        count++;
    }
    printf("Tamanho da String: %d\n", count);
    
}
