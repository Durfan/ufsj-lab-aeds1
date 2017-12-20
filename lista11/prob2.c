#include <stdio.h>
#include <math.h>

struct ponto {
    int x;
    int y;
};

int main (void) {

    int i;
    int distancia;
    struct ponto xy[2];

    for ( i=1; i<=2; i++ ) {       
        printf ("Ponto %d\n", i);
        printf ("X: ");
        scanf ("%d", &xy[i].x);
        printf ("Y: ");
        scanf ("%d", &xy[i].y);
    }

    distancia = sqrt(pow ((xy[1].x-xy[2].x),2) + pow ((xy[1].y-xy[2].y),2));

    
    printf ("Distancia= %.2f\n", distancia);

}