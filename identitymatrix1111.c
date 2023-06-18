
#include <stdio.h>
int main()
{
int i, j, n;
 printf("Enter the dimension of the matrix: ");
 scanf("%d", &n);
 for(i = 0; i < n;i++)
 {
 for(j = 0; j < n;j++)
{
 if(i == j)
{
 printf("1 ");
 }
else
{
 printf("0 ");
 }
 }
 printf("\n");
 }
 return 0;
}
