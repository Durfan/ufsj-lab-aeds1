// Crie um função que receba uma string e retorne o ponteiro
// para essa string invertida. A string orignal não deve ser modificada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void INVERTESTR ( char a[50] ) {
  int i;
  int tam=0;

  for ( i=0;;i++ ) {
    if ( a[i]=='\0') break;
    else tam++;
  }

  char *p = &a[tam];

  for ( i=0; i<=tam; i++ ) {
    printf ("%c", *(p-i));
  }
  printf ("\n");
}

int main(void) {
  char a[50];

  printf ("String: ");
  scanf ("%s", a);

  INVERTESTR(a);
}
