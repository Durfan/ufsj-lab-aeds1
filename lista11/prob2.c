#include <stdio.h>
#include <math.h>

struct ponto {
    int x;
    int y;
};

int main (void) {

    int i;
    float distancia;
    struct ponto xy[2];

    for ( i=0; i<2; i++ ) {       
        printf ("Ponto %d\n", i);
        printf ("X: ");
        scanf ("%d", &xy[i].x);
        printf ("Y: ");
        scanf ("%d", &xy[i].y);
    }

    distancia = sqrt(pow ((xy[0].x-xy[1].x),2) + pow ((xy[0].y-xy[1].y),2));

    
    printf ("Distancia= %.2f\n", distancia);

}