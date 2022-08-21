// 42. Write a program in C for multiplication of two square Matrices.
#include <stdio.h>
int main()
{
    int r, c, r2, c2, i, j, k, sum = 0;
    printf("Enter your Row of first Matrix : ");
    scanf("%d", &r);
    printf("Enter your Column of first Matrix : ");
    scanf("%d", &c);
    printf("Enter your Row second Matrix : ");
    scanf("%d", &r2);
    printf("Enter your Column of second Matrix : ");
    scanf("%d", &c2);
    if (c == r2)
    {
        int arr1[r][c];
        printf("Enter your First matrix\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        int arr2[r2][c2];
        int result[r][c2];
        printf("Enter your second Matrix\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < r2; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
        printf("\n\n");
        printf("The multiplication of two matrix\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The multipication is does not exist");
    }
    return 0;
}