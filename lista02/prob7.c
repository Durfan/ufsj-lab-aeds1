#include <stdio.h>

int main(void) {
  int i,j,n[3],temp;

  for ( i=0; i<3; i++) {
    printf("v[%d]: ", i);
    scanf("%d", &n[i]);
  }

  for ( i=0; i<3; i++ ){
    for ( j=i+1; j<3; j++){
      if ( n[i]>n[j] ) {
        temp=n[i];
        n[i]=n[j];
        n[j]=temp;
      }
    }
  }

  i=0;
  while ( i<3 ) {
    printf("%d ", n[i]);
    i++;
  }

  printf("\n");
  return 0;
}
