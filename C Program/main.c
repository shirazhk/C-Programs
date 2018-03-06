//
//  main.c
//  C Program
//
//  Created by Shiraz Hasan Khan on 05/12/17.
//  Copyright © 2017 Srz studios. All rights reserved.
//
#include<stdio.h>
int sumprefix(int);
int sumsuffix(int);


int main(){
    int N;
    scanf("%d", &N);
    
    int A[N];
    int minimum;
    int i=0;
    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    
    int i1=0;
    int i2=0;
    int sum[N];
    int lc=1;
    int j=0;
    
    for(j=0; j<N; j++){
        i1 = sumprefix(A[j]);
    }
    
    for(j=0; j<N; j++){
        i2 = sumprefix(A[j]);
    }
    
    minimum = A[0];
    for (j=0; j<N; j++){
        if (A[j] < minimum ){
            minimum = A[j];
            lc = j+1;
        }
    }
    printf("%d",lc);
    return 0;
}
int sumprefix(int i){
    return i;
}
int sumsuffix(int i){
    return i;
}
