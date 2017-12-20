//
//  prob3.c
//  
//
//  Created by Pablo Cecilio on 14/10/2017.
//

#include <stdio.h>

int main() {
    int val[9],i,x,y;
    
    for (i=0;i<=9;i++){
        printf("val[%d]=", i);
        scanf("%d", &val[i]);
    }
    
    printf("Valor para posicao do vetor em X:");
    scanf("%d", &x);
    printf("Valor para posicao do vetor em Y:");
    scanf("%d", &y);
    printf("Total entre %d+%d=%d\n", val[x], val[y], val[x]+val[y]);
}
           
