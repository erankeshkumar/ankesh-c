#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num % 2;
        num = num / 2;
    }
    for (int j = 9; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    return 0;
}