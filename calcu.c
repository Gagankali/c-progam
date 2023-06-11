#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    char s;
    printf("Enetr the value of A and B : ");
    scanf("%f%f", &a, &b);
    printf("Enter the operation : ");
    scanf("%s", &s);

    if (s == '+')
    {
        printf("sum = %f", a + b);
    }
    else if (s == '-')
    {
        printf("sub = %f", a - b);
    }
    else if (s == '/')
    {
        printf("que = %f", a - b);
    }
    else if (s == '%')
    {
        printf("reminder = %d", (int)a%(int)b);
    }

    return 0;
}
