#include <stdio.h>
int main()
{
    int num1, num2;
    int i;
    printf("Enter your first number : ");
    scanf("%d", &num1);
    printf("Enter your first number : ");
    scanf("%d", &num1);
    for (i = (num1 < num2) ? num1 : num2; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
