#include <stdio.h>

int main(){
int a,b,c;
printf("#A: ");
scanf("%d", &a);
printf("#B: ");
scanf("%d", &b);
printf("#C: ");
scanf("%d", &c);

if (a>=b && a>=c){
  printf("%d e maior\n", a);
}
if (b>=a && b>=c) {
  printf("%d e maior\n", b);
}
if (c>=a && c>=b){
  printf("%d e maior\n", c);
}

return 0;
}
