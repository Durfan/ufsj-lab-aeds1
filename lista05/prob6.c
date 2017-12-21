//
//  prob6.c
//  
//
//  Created by Pablo Cecilio on 14/10/2017.
//

#include <stdio.h>

int main() {
    float vt[10], temp;
    int i,j;
    
    for (i=0;i<10;i++) {
        printf("vt[%d]=", i);
        scanf("%f", &vt[i]);
    }
    
    for (i=0;i<10;i++){
        for (j=i+1;j<10;j++){
            if (vt[i]>vt[j]){
                temp=vt[i];
                vt[i]=vt[j];
                vt[j]=temp;
            }
        }
        
    }
    
    for (i=0;i<=9;i++) {
        printf("vt[%d]=%.2f\n", i, vt[i]);
    }
}
