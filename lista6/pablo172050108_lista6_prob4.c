//
//  prob4.c
//  
//
//  Created by Pablo Cecilio on 06/10/2017.
//

#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char text[50];
    printf("Digite : ");
    fgets(text, 50, stdin);

    for (i=0; i<strlen(text); i++) {
        if (text[i]>=65 && text[i]<=90)
        text[i] = text[i]+32;
    }
    fputs(text, stdout);
    printf("\n");
    
}
