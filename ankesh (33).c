// 45 Write a program in C to insert New value in the array (sorted list )..
#include <stdio.h>
int main()
{
    int num, i, max;
    printf("Enter your number : ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num - 1; i++)
    {
        printf("Element %d : - ", i);
        scanf("%d", &arr[i]);
    }
    printf("Ensert your number in array : ");
    scanf("%d", &arr[i]);
    for (i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                max = arr[i];
                arr[i] = arr[j];
                arr[j] = max;
            }
        }
    }
    for (int k = 0; k < num; k++)
    {
        printf("%d\n", arr[k]);
    }
    return 0;
}