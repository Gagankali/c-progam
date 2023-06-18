
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], m, n, p, q, i, j, k;
    printf("enter the order of Matrix A:-");
    scanf("%d%d", &m, &n);
    printf("enter the order of Matrix B:-");
    scanf("%d%d", &p, &q);
    printf("enter the first matrix element:-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("multiply of the matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < p; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < m; i++)
        printf("enter the first matrix element:-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("multiply of the matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < p; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < m; i++)
        printf("enter the first matrix element:-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("multiply of the matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < p; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
