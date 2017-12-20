//
//  prob5.c
//  
//
//  Created by Pablo Cecilio on 06/10/2017.
//

#include <stdio.h>
#include <string.h>

int main() {
    int i, cesar=3;
    char text[100];
    setbuf(stdin, NULL);
    printf("String : ");
    fgets(text, 100, stdin);
    
    for (i=0; i<strlen(text)-1; i++) {
        
        if (text[i] !=32) {
        
            if (text[i]+cesar>122)
            text[i] -= 26;

            if (text[i]+cesar<97)
            text[i] += 26;

            text[i]=text[i]+cesar;
        }
    }
    
    printf("String Codificada: ");
    fputs(text, stdout);

    
}
