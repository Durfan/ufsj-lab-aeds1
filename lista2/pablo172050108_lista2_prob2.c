#include <stdio.h>

int main() {

int num;

printf("Digite o numero: ");
scanf("%d", &num);

if (num!=0){
    if (num>0){
      printf("Positivo\n");
      }
    else {
      printf("Negativo\n");
      }
}

else {
  printf("Zero\n");
}

return 0;

}
