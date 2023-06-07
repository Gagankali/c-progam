# c-progam
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("Enter two no : ");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("Enterd two no are equal : ");
        exit(0);
    }
    printf("The entered no is not equal : ");
    return 0;
}
