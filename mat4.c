#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], product[10][10];
    int i, j, k, R1, C1, R2, C2;
    printf("Enter rows and columns of first matrix:\n");
    scanf("%d %d", &R1, &C1);
    printf("Enter rows and columns of second matrix:\n");
    scanf("%d %d", &R2, &C2);
    printf("Enter elements of first matrix:\n");
    for (i=0;i<R1;i++)
    {
        for (j=0;j<C1;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i=0;i<R2;i++)
    {
        for (j=0;j<C2;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i=0;i<R1;i++)
    {
        for (j=0;j<C2;j++)
        {
            product[i][j] = 0;
        }
    }
    for (i=0;i<R1;i++)
    {
        for (j=0;j<C2;j++)
        {
            for (k=0;k<C1;k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The product of the two matrices is:\n");
    for (i=0;i<R1;i++)
    {
        for (j=0;j<C2;j++)
        {
            printf("%4d", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}

