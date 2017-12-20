#include <stdio.h>

int main(){
  int n,i,ti=0;

  printf("#: "),
  scanf("%d", &n);

  for (i=0; i<n; i++){
    if (i%2!=0){
      printf ("%d+", i);
      ti+=i;
    }

  }

printf ("=%d\n", ti);

return 0;
}
