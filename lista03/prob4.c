#include <stdio.h>

int main() {

  int num, soma=0, loop=0;
  float media;

  printf ("\nDigite um numero inteiro (negativo para sair): ");
  scanf ("%d", &num);

  while(num>0)
   {
     soma+=num;
     loop++;
     printf ("\nDigite um numero inteiro positivo: ");
     scanf ("%d", &num);
   }
   if (loop>=1)
      {
     media=(float)soma/loop;
     printf ("Numeros Positivos:%i A media calculada foi %.2f\n", loop, media);
      }
   else
     printf ("\nNenhum valor positivo foi digitado!\n");

  return 0;
}
