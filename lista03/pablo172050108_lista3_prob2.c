#include <stdio.h>

int main() {

int n,fat;

    printf ("#: ");
    scanf ("%i",&n);
    fat=n;
    for (fat=1;n>0;n--)
    {
      fat=fat*n;
      printf ("%i : ", n);
    }
    printf ("= %i \n", fat);

return 0;
}
