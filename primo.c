#include <stdio.h>

int main(void) {

  int n, d=2, primo=1;

  printf("Digite um #: ");
  scanf("%i", &n);

  if ( n<=1 ) {
    primo=0;
  }

  while ( primo && d<=n/2 ) {
    if ( n%d==0 ) {
      primo=0;
    }
    d++;
  }

  if ( primo )
    printf("E primo \n");
  else
    printf("Nao e primo\n");

  return 0;
}
