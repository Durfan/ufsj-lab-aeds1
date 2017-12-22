#include <stdio.h>

int main() {

  int n;

  printf ("n: ");
  scanf ("%d", &n);

  if ( n%2==0 )
    printf ("E par\n");
  else
    printf ("Nao e par\n");

  return 0;
}
