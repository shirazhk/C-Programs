//
//  main.c
//  C Program
//
//  Created by Shiraz Hasan Khan on 05/12/17.
//  Copyright © 2017 Srz studios. All rights reserved.
//
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=N-1,swap,eqcheck=0;
    while(j!=0)
    {
        for(int k=0;k<=j;k++)
        {
            if(a[k]<a[k+1])
            {
                swap=a[k+1];
                a[k+1]=a[k];
                a[k]=swap;
            }
            if(a[k]==a[k+1])
            {
                eqcheck=1;
            }
        }
        j--;
    }
    if(eqcheck==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
