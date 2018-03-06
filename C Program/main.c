//
//  main.c
//  C Program
//
//  Created by Shiraz Hasan Khan on 05/12/17.
//  Copyright © 2017 Srz studios. All rights reserved.
//
#include<stdio.h>
int divcount(int y);
int dcounter=0;
int main()
{
    int N,counter=0;
    scanf("%d",&N);
    for(int k=1;k<=N;k++)
    {
        if(N%k==0)
        {
            counter+=divcount(k);
        }
    }
    printf("%d",counter);
    return 0;
}

int divcount(int y)
{
    dcounter=0;
    while(y>0)
    {
        int digit=y%10;
        if(digit==3||digit==5||digit==6)
        {
            dcounter=1;
        }
        y=y/10;
    }
    return dcounter;
}
