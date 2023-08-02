#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, j;

    printf("Enter Number Of A : ");
    scanf("%d", &a);

    for (i = a; i >= 1; i--)
    {
        for (j = i; j < a; j++)
        {
            printf(" ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}