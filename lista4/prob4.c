#include <stdio.h>

int main(){

int idade,peso,pkid=0,mkid=0,pteen=0,mteen=0,padult=0,madult=0,pold=0,mold=0,pessoas;

for (pessoas=1;pessoas<=15;pessoas++) {
  printf ("\n%d:\n", pessoas);
  printf ("Idade: ");
  scanf ("%d", &idade);
  printf ("Peso: ");
  scanf ("%d", &peso);

    if (idade>=1 && idade<=10) {
      mkid+=peso;
      pkid++;
    }

    if (idade>=11 && idade<=20) {
      mteen+=peso;
      pteen++;
    }

    if (idade>=21 && idade<=30) {
      madult+=peso;
      padult++;
    }

    if (idade>=31) {
      mold+=peso;
      pold++;
    }

  }

mkid/pkid;
mteen/pteen;
madult/padult;
mold/pold;

printf("1 ate 10 anos: %d, Media do Peso: %d\n", pkid, mkid);
printf("11 ate 20 anos: %d, Media do Peso: %d\n", pteen, mteen);
printf("21 ate 30 anos: %d, Media do Peso: %d\n", padult, madult);
printf("Acima de 31: %d, Media do Peso: %d\n", pold, mold);

return 0;

}
