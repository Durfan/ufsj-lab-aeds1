#include <stdio.h>
int main () {
int i;

printf ("Comando \"for\"\n");

for ( i=0 ; i<10; i++) {
  printf ( "i=%d ", i);
}

printf ("\n\nComando \"while\"\n");

i=0;

while (i<10) {
  printf ( "i=%d ", i);
  i++;
}

printf("\n");

return 0 ;
}
