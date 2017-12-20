#include <stdio.h>

int main(){

int n,nt=0,loop;

for (loop=1;loop<=10;loop++) {
  printf ("\n#%d:\n", loop);
  printf ("#: ");
  scanf ("%d", &n);

    if (n>40 && n<60) {
      nt++;
    }
  }

printf("Total de numeros entre 60 e 40: %d\n", nt);

return 0;

}
