//
//  prob5.c
//  
//
//  Created by Pablo Cecilio on 14/10/2017.
//

#include <stdio.h>

int main() {
    int i, neg=0;
<<<<<<< HEAD
    float vt[10], soma=0;
    
    for (i=0;i<10;i++){
        printf("vt[%d]=", i);
=======
    float vt[10], soma;
    
    for (i=0;i<10;i++){
        printf("vt[%d]=", i+1);
>>>>>>> 9b61ec32d1decacc1c15f26dc11d9501781bbaf8
        scanf("%f", &vt[i]);
    }
    
    for (i=0;i<10;i++) {
        soma+=vt[i];
<<<<<<< HEAD
        printf("+(%f)", vt[i]);
=======
        printf("+%f", vt[i+1]);
>>>>>>> 9b61ec32d1decacc1c15f26dc11d9501781bbaf8
        if (vt[i]<0){
            neg++;
        }
    }
    printf("=%.2f\n# Negativos=%d\n", soma, neg);
    
}
