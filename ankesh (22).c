//  34 count duplicate element in array
 #include <stdio.h>
#include <conio.h>
int main()
{
    int i, arr[20], j, no, c = 0;
    printf("Enter size of array: ");
    scanf("%d", &no);
    printf("Enter any %d elements in array: ", no);
    for (i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for (i = 0; i < no; i++)
    {
        for (j = i + 1; j < no; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
                break;
            }
        }
    }
    printf("%d", c);
}