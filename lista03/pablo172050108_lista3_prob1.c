#include <stdio.h>

int main() {

int a,b,total,floop=1;

    printf ("#: ");
    scanf ("%i",&a);
    printf ("Elevado à: ");
    scanf ("%i",&b);
    total=a;
    for (;floop<b;floop++)
     {
        total*=a;
     }
    printf ("%i^%i= %i\n",a,b,total);

return 0;
}
