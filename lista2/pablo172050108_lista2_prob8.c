#include <stdio.h>

int main() {

  int id;

  printf("Idade: ");
  scanf("%d", &id);

  if (id>=10 && id<=14) {
    printf("Infantil\n");
  }
  else if (id>=15 && id<=17) {
    printf("Juvenil\n");
  }
  else if (id>=18 && id<=50) {
    printf("Adulto\n");
  }
  else if (id>=51) {
    printf("Idoso\n");
  }

  return 0;
}
