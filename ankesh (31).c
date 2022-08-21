// 43. Write a program in C for addition of two Matrices of same size.
#include <stdio.h>
int main()
{
    int i, j;
    int arr[3][3], arr1[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element %d %d : -", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element %d %d : -", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j] - arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}