#include<stdio.h>

int main()
{
    char s;
    printf("Enter the alphabeat or digits : ");
    scanf("%s",&s);
    if(s>='a'&&s<='z'||s>='A'&&s<='Z')
    { 
      printf("The entered character is alphabheat :");
    }
 
    else if (s>=0&&s>=9)
    {
        printf("The entered character is digits : ");
      
    }
    else 
    {

        printf("The input is eithere digits or alphabhat ");
     
    }
    
    return 0;
}



/*.   GCC of two no #include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int gcd = 1; // Initialize gcd as 1
    
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; // Update gcd if i divides both numbers
        }
    }
    
    printf("Greatest Common Divisor: %d\n", gcd);
    
    return 0;
}.  */







/*. #include <stdio.h>

int main() {
    int decimal, binary = 0, base = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }
    
    printf("Binary equivalent: %d\n", binary);
    
    return 0;
}. */






/*#include<stdio.h>
int main(){
  int n,rem,rev=0;
  printf("Enter the no :");
  scanf("%d",&n);
  while(n>0)
    {
      rem=n%10;
      rev =rev*10+rem;
      n=n/10;
    }
  printf("Reverse no is %d ",rev);
  return 0;
}. */


/*#include<stdio.h>
int main(){ 
  int n,b,d=0,base=1,rem;
  printf("Enter the binary no \n");
  scanf("%d",&n);
  while(n>0)
    {
      rem=n%10;
      d=d+rem*base;
      n=n/10;
      base=base*2;
    }
  printf("%d is decimal value = %d ",b,d);

  return 0;
}. */
