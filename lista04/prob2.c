#include <stdio.h>

int main(){

int idade,midade=0,peso,gordas=0,pessoas;

for (pessoas=1;pessoas<=7;pessoas++) {
  printf ("\n\n%d:\n", pessoas);
  printf ("Idade: ");
  scanf ("%d", &idade);
  printf ("Peso: ");
  scanf ("%d", &peso);

    if (peso>90) {
      gordas++;
    }

  midade+=idade;

  }

midade/pessoas;

printf("Gordas: %d, Media da idade: %d\n", gordas, midade);

return 0;

}
