#include <stdio.h>
int main()
{
    int num, rem, decimal = 0, base = 1;
    printf("Enter your binarry number : ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("Your decimal number is : %d", decimal);
    return 0;
}