#include <stdio.h>

int main(){

  int id;

  printf("Idade: ");
  scanf("%d", &id);

  if (id>=18 && id<=67){
    printf("Pode doar\n");
  }
  else
    printf("Nao pode doar\n");

  return 0;
}
