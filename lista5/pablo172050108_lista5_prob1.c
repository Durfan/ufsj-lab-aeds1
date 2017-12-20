//
//  prob1.c
//  
//
//  Created by Pablo Cecilio on 14/10/2017.
//

#include <stdio.h>

int main(){
    int val[4],i;
    
    for (i=0;i<=4;i++) {
        printf("Digite o valor para val[%d]:", i);
        scanf("%d", &val[i]);
    }
    
    printf("\nValores Lidos:\n");
    
    for (i=0;i<=4;i++){
        printf("val[%d]=%d\n", i, val[i]);
    }
}
