//
//  prob5.c
//  
//
//  Created by Pablo Cecilio on 14/10/2017.
//

#include <stdio.h>

int main() {
    int i, neg=0;
    float vt[10], soma=0;
    
    for (i=0;i<10;i++){
        printf("vt[%d]=", i);
        scanf("%f", &vt[i]);
    }
    
    for (i=0;i<10;i++) {
        soma+=vt[i];
        printf("+%f", vt[i]);
        if (vt[i]<0){
            neg++;
        }
    }
    printf("=%.2f\n# Negativos=%d\n", soma, neg);
    
}
