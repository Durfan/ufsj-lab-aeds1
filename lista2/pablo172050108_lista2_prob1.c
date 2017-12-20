#include <stdio.h>

int main() {

int n;

  printf ("Digite um #: ");
  scanf ("%d", &n);

  if (n%2==0) {
    printf ("%d e par\n", n);
  }
  else {
    printf ("%d nao e par\n", n);
  }

  return 0;

}
