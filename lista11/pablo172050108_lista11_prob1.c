// Crie uma estrutura representado um gato. Essa estrutura deve contar
// informações sobre o nome, raça, idade e peso. Com base nessa estrutura,
// escreva um programa que leia os dados de 5 gatos e em seguida:
// • Calcule e exiba o nome do gato mais velho e do mais novo.
// • Calcule e exiba o nome do gato mais pesado e do mais leve.

#include <stdio.h>
#include <string.h>

#define TAM 5

struct gatos {
  char  nome[50];
  char  raca[50];
  int   idade;
  float peso;
};

int main(void) {
  int i;
  char  maioridade[50], menoridade[50], maispesado[50], maisleve[50];
  struct gatos gato[TAM];
 

  for ( i=0; i<TAM; i++ ) {
    printf ("\nGato %d\n", i+1);
    printf ("----------------------------------------------\n");
    printf ("Nome: ");
    scanf  ("%s", gato[i].nome);
    printf ("Raca: ");
    scanf  ("%s", gato[i].raca);
    printf ("Idade: ");
    scanf  ("%d", &gato[i].idade);
    printf ("Peso: ");
    scanf  ("%f", &gato[i].peso);
  }

  int   maisvelho=0, maisnovo=gato[0].idade;
  float pesado=0, leve=gato[0].peso;

  for ( i=0; i<TAM; i++ ) {
      if (gato[i].idade >  maisvelho)  maisvelho=gato[i].idade, strcpy(maioridade,gato[i].nome);
      if (gato[i].idade <= maisnovo)   maisnovo=gato[i].idade, strcpy(menoridade,gato[i].nome);
      if (gato[i].peso  >  pesado)     pesado=gato[i].peso, strcpy(maispesado,gato[i].nome);
      if (gato[i].peso  <= leve)       leve=gato[i].peso, strcpy(maisleve,gato[i].nome);
  }

    printf ("\n\n------------------------\n");
    printf ("Gato de Maior Idade: %s\n", maioridade);
    printf ("Gato de Menor Idade: %s\n", menoridade);
    printf ("------------------------\n");
    printf ("Gato de Mais Pesado: %s\n", maispesado);
    printf ("  Gato de Mais Leve: %s\n", maisleve);
    printf ("------------------------\n");
}
