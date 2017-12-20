
#include <stdio.h>

void PIRAMIDE(int i, int n) {
  int j;
  if (i<n) {
    for (j=0; j<=i; j++) printf("!");
    printf("\n");
    if (i==n-1) i++;
    PIRAMIDE(i+1,n);
  }
  if (i>n && n!=0) {
    for (j=0; j<=n; j++) printf("!");
    printf("\n");
    PIRAMIDE(i,n-1);
  }
  if (n==0) printf("!\n");
  
}

int main(void) {
  int n;
  printf("N=");
  scanf("%d", &n);
  PIRAMIDE(0,n);
}