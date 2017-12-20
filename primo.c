#include <stdio.h>

int main() {

int n,d=2,tru=1;

printf ("Digite um #: ");
scanf ("%i", &n);

if (n<=1) {
  tru=0;
}

printf("Testando divisores...\n");

while (tru==1 && d<=n/2) {
  printf ("%i : ", d);
  if (n%d==0) {
    tru=0;
  }
  d++;
}

if (tru == 1)
	printf("\n%i e primo \n", n);
    else
	printf("\n%i nao e primo \n", n);

  return 0;

}
