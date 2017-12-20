#include <stdio.h>

int main(){

  float a,b,c,d,media;

  printf("#1: ");
  scanf("%f", &a);
  printf("#2: ");
  scanf("%f", &b);
  printf("#3: ");
  scanf("%f", &c);
  printf("#4: ");
  scanf("%f", &d);

  media=(a+b+c+d)/4;
  printf("Media= %f\n", media);

  if (media>=6.5 && media<7) {
    printf("Recuperacao\n");
  }

  if (media>=7){
    printf("Aprovado\n");
  }
  
  if (media<6.5) {
    printf("Reprovado\n");
  }

  return 0;
}
