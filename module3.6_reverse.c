#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i;

    printf("Enter No : ");
    scanf("%d", &a);

    while (a > 0)
    {
        i = a % 10;
        printf("%d", i);
        a = a / 10;
    }

    return 0;
}