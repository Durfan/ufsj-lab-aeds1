#include <stdio.h>

int main()
{
    int n,d,tru;

    d=2;
    tru=1;

    printf("#: ");
    scanf("%i", &n);

    if (n <= 1){
      tru=0;
    }
    while (tru==1 && d<=n/2)
    {
          if (n%d==0)
	        tru=0;
	        d=d+1;
    }

    if (tru==1)
      printf("%i e primo \n", n);
    else
      printf("%i nao e primo \n", n);

    return 0;
}
