#include<stdio.h>
#include<string.h>
void main()
{
 int i,n;
 char str[20];
 printf("Enter the String to get reversed\n");
 gets(str);
 n=strlen(str);
 printf("\nReversed string is \n");
 for(i=n-1;i>=0;i--)
 {
 printf("%c",str[i]);
 }
}
