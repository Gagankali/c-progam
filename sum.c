#include<stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    while (i<=n)
    {
       sum=sum+i;
       i++;
    }
    printf("Sum of n number = %d ",sum);
    return 0;
}
