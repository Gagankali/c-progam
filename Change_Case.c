#include<stdio.h>
#include<string.h>
void main()
{
char str1[100], str2[100];
printf("\n Please Enter lower-case String: ");
gets(str1);
strupr(str1);
printf("\nAfter changing lowercase to upperrcase - %s\n", str1);
printf("\n Please Ente Upper-case String: ");
gets(str2);
strlwr(str2);
printf("\nAfter changing uppercase to lowercase   - %s\n", str2);
}
