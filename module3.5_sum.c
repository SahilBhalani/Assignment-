#include <stdio.h>
#include <conio.h>

int main()
{
    int a,i,sum=0;

    printf("Enter No : ");
    scanf("%d", &a);

    while (a>0)
    {
        i=a%10;
        sum=sum+r;
        a=a/10;
    }
    printf("%d",sum);
    
    return 0;
}