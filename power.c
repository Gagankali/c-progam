#include<stdio.h>

int main()
{
    int base,exp,pow=1,i=1;
    printf("Enter the base and exponent\n");
    scanf("%d%d",&base,&exp);
    while(i<=exp)
    {
        pow=base*pow;
        i++;
    }
    printf("The power is %d",pow);
    
        return 0;
}
