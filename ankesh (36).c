#include <stdio.h>
int main()
{
    int num1, num2;
    int Gcd;
    printf("Enter your 1st number : ");
    scanf("%d", &num1);
    printf("Enter your 2nd number : ");
    scanf("%d", &num1);
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            Gcd = i;
        }
    }
    printf("%d", Gcd);
    return 0;
}