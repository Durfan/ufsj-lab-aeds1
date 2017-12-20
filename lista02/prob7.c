#include <stdio.h>

int main(){

  int a,b,c;

  printf("#1: ");
  scanf("%d", &a);
  printf("#2: ");
  scanf("%d", &b);
  printf("#3: ");
  scanf("%d", &c);

  if (a>=b && a>=c && b>=c) {
    printf("%d %d %d\n", a, b, c);
  }

  if (a>=b && a>=c && b<=c) {
    printf("%d %d %d\n", a, c, b);
  }

  if (b>=a && b>=c && a>=b) {
    printf("%d %d %d\n", b, a, c);
  }

  if (b>=a && b>=c && a<=b) {
    printf("%d %d %d\n", b, c, a);
  }

  if (c>=a && c>=b && b>=a) {
    printf("%d %d %d\n", c, b, a);
  }

  if (c>=a && c>=b && b<=a) {
    printf("%d %d %d\n", c, a, b);
  }


  return 0;
}
