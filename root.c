#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,dis,root2,root1,real,img;
    printf("Enrte the value of a b c : ");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b*-4*a*c;
    if(dis==0)
    {  root1=root2=-b/(2*a);
       printf("Root1 = Root2 = %f \n",root1);
       printf("Root are equal : \n");        
    }    
    else if(dis>0)
    {
      root1=(-b+sqrt(dis))/(2*a);
      root2=(b+sqrt(dis))/(2*a);
      printf("Root1 = %f Root2 = %f \n",root1,root2);
      printf("Roots are real and distint : \n");
    }
    else
    {
        real=-b/(2*a);
        img=sqrt(fabs(b)/2*a);
        printf("Root1 =  = %f +%fi \n",real,img);
         printf("Root2 =  = %f -%fi \n",real,img);
         printf("Roots are real and distint : \n");
    }
    return 0;
}
