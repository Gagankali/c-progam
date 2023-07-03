/*
bubble sort

#include<stdio.h>

void main()

{

 int n,i,j,temp,items[100];

 printf("Enter the total number of items\n");

 scanf("%d",&n);

printf("Enter prices of each element\n");

 for(i=0;i<n;i++)

 {

 scanf("%d",&items[i]);

 }

 printf("The prices of items are :-\n");

 for(i=0;i<n;i++)

 {

 printf("%d\t",items[i]);

 }

 for(i=1;i<n;i++)

 {

 for(j=0;j<(n-i);j++)

 {

 if(items[j]>items[j+1])

 {

 temp=items[j];

 items[j]=items[j+1];

 items[j+1]=temp;

 }

 }

 }

printf("\n Prices of each items from Lowest to Highest are :-\n");

 for(i=0;i<n;i++)

 {

 printf("%d\t",items[i]);
 }
}.        */