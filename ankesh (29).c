// 41. Write a program in C to find transpose of a given matrix.
#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter your Row : ");
    scanf("%d", &r);
    printf("Enter your column : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter your matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The transpose of a given matrix\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}