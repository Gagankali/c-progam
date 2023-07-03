/*
 1: Develop a program using bubble sort technique to display the prices of each item from 
lowest to highest
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




/*

2: Develop a program using selection sort technique to display the weights of each item 
from lowest to highest

#include <stdio.h>
void main()
{
int a[100], n, i, j, position, swap;
printf("Enter number of items\n");
scanf("%d", &n);
printf("Enter weight of each items\n");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
for(i = 0; i < n - 1; i++)
{
position=i;
for(j = i + 1; j < n; j++){

if(a[position] > a[j])

position=j;

}

if(position != i)

{

swap=a[i];

a[i]=a[position];

a[position]=swap;

}

}

printf("After sorting weights of each item:\n");

for(i = 0; i < n; i++)

{

printf("%d\t", a[i]);

}

}.  */