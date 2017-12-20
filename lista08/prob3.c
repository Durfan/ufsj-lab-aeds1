//
//  prob3.c
//  
//
//  Created by Pablo Cecilio on 20/10/2017.
//

#include <stdio.h>
#include <string.h>

#define TAM 100

void VOGAIS (char a[]) {
    int i, j, count=0, vogal;
    char vogais[] = {"aeiouAEIOU"};
    
    printf ("\n----------------------------------------------\n");
    fputs (a,stdout);
    
    for (i=0; i<strlen(a);i++) {
        vogal=0;
        for (j=0; j<strlen(vogais); j++) {
            if (a[i]==vogais[j]) {
                vogal=1;
                printf ("%c", a[i]);
                count++;
            }
            
        }
        if (vogal==0) printf(" ");
    }
    printf (" = %d vogais", count);
    printf ("\n----------------------------------------------\n");
    
}

int main() {
    char frase[TAM];
    
    printf ("Frase: ");
    fgets (frase,TAM,stdin);
    
    VOGAIS(frase);

}
