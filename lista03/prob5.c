#include <stdio.h>

int main() {

float n,H;

    printf ("#: ");
    scanf ("%f",&n);
    H=0;
    while (n>0)
    {
      H=H+(1/n);
      n--;
      printf("%f\n", H);
    }
    return 0;
}
