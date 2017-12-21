//
//  prob4.c
//  
//
//  Created by Pablo Cecilio on 14/10/2017.
//

#include <stdio.h>
#include <math.h>

int main() {
    int vt[10],i;
    float maior=+INFINITY,menor=-INFINITY;

    
    for (i=0;i<=10;i++) {
        printf("vetor[%d]=", i);
        scanf("%d", &vt[i]);
        }
    
    maior=vt[0];
    menor=vt[0];

    for (i=0;i<10;i++){
        if (vt[i]>maior){
            maior=vt[i];
        }
        else if (vt[i]<menor) {
            menor=vt[i];
        }
    }
                        
    printf("Maior=%.2f\nMenor=%.2f\n", maior, menor);
     
}
