#include <stdio.h>

struct tempo {
    int hora;
    int minuto;
    int segundo;
};

int main (void) {

    int i;

    struct tempo data[5];
    int maior;

    for ( i=0; i<5; i++ ) {       
        printf ("\nTempo %d\n", i+1);
        printf ("Hora: ");
        scanf ("%d", &data[i].hora);
        printf ("Minuto: ");
        scanf ("%d", &data[i].minuto);
        printf ("Segundo: ");
        scanf ("%d", &data[i].segundo);
    }
    
    for ( i=0; i<5; i++ ) {      
        while (data[i].segundo >= 60) {
            data[i].minuto+=1;
            data[i].segundo-=60;
        }
        while (data[i].minuto >= 60) {
            data[i].hora+=1;
            data[i].minuto-=60;
        }
    }

    maior=data[0].hora;

    for ( i=0; i<5; i++ ) { 
        if (data[i].hora>=maior) maior=data[i].hora;
    }
    printf ("\n\nMaior hora entre os tempos: %dhs\n", maior);
}