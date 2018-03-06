//
//  main.c
//  C Program
//
//  Created by Shiraz Hasan Khan on 05/12/17.
//  Copyright © 2017 Srz studios. All rights reserved.
//
#include<stdio.h>
int sorting(int [], int);

int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    int B[N];
    int i,k;
    int result=0;
    
    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    for(i=0; i<N; i++){
        scanf("%d", &B[i]);
    }
    
    sorting(A, N);
    sorting(B, N);
    
    for(i=0; i<N; i++){
        k=N-i-1;
        result = result + A[i] * B[k];
    }
    printf("%d", result);
    return 0;
}

int sorting(int a[], int N){
    int i,j,temp=0;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(a[i] < a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
