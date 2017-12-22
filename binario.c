#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long BINARIO (long n) {
    int r; 
    long bin=0, i=1;
    while ( n != 0 ) {
        r = n%2;
        n = n/2;
        bin+=(r*i);
        i = i*10;
    }
    return bin;
}

int main (void) {
    long n;

    system("clear");
    while (1) {
        printf("Numero: ");
        scanf("%ld", &n);
        
        if ( n<0 ) break;
        printf("%ld\n", BINARIO(n));
    }

  return 0;
}
