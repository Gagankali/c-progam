#include <stdio.h>
#include <string.h>
void main()
{
   char str[100];
   int len;
   printf("Please Enter any String: ");
   gets(str);
   len = strlen(str);
   printf("The length of the string is: %d", len);
}
