#include <stdio.h>

int main(){

  int s,vp;

  printf("Salario: ");
  scanf("%d", &s);
  printf("Valor da Prestacao: ");
  scanf("%d", &vp);

  if (vp>s*0.2){
    printf("Empréstimo não concedido\n");
  }
  else
    printf("Empréstimo concedido\n");

  return 0;
}
