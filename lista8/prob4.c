//
//  prob4.c
//  
//
//  Created by Pablo Cecilio on 20/10/2017.
//

#include <stdio.h>

void PRAUM (int a, int b) {
    
    int n=1, soma=0;
    int i;
    
    if (a<b) {
        for (i=a+1; i<b-1; i++) n++;
        int s[n];
        for (i=1; i<=n; i++) {
            s[i-1]=a+i;
            soma+=s[i-1];
            printf ("%d ", s[i-1]);
        }
    }
    
    if (a>b) {
        for (i=a-1; i>b+1; i--) n++;
        int s[n];
        for (i=1; i<=n; i++) {
            s[i-1]=a-i;
            soma+=s[i-1];
            printf ("%d ", s[i-1]);
        }
    }
    
    printf (" = %d\n", soma);
}

#include <stdio.h>

int main() {
   int x, y;
    
    printf ("X= ");
    scanf("%d", &x);
    printf ("Y= ");
    scanf("%d", &y);
    
    PRAUM(x,y);
}
