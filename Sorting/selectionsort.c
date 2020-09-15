//
// Created by tamajit on 9/15/2020.
//
#include<stdio.h>
#include "selectionsort.h"

void selectionsort(int* arr,int n)
{
    int i,k,temp,min,loc;
    for(i=1;i<=n-1;i++)
    {
        min = arr[i];
        loc = i;
        for(k=i+1;k<=n;k++)
        {
            if(min>arr[k])
            {
                min = arr[k];
                loc = k;
            }
        }
        swap(&arr[i],&arr[loc]);

    }
}
void swap(int* x,int* y)
{
    int temp;
    temp = *x;  // temp = a[k];
    *x = *y;    // a[k] = a[loc];
    *y = temp;  // a[loc] = temp;

}

