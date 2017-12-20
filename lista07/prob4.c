//
//  prob4.c
//  
//
//  Created by Pablo Cecilio on 13/10/2017.
//

#include <stdio.h>
#include <string.h>

void achaletra (char a[], char c) {
    int i, posicao=-1;
    for ( i=0; i<strlen(a); i++) {
        if (c==a[i]) {
            posicao=i;
            break;
        }

    }
    
    printf("Posicao = %d\n",posicao);
}

int main() {
    
    char texto[20], c;
    
    printf ("Digite uma palavra: ");
    fgets (texto,20,stdin);
    printf ("Informe o caracter: ");
    scanf ("%c",&c);
    
    achaletra(texto,c);

}
