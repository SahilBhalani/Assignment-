#include <stdio.h>
#include <conio.h>

int main()
{
    int t, a,area, length,width,radius;
    float base, height,pie=3.14;

    printf("Choose number between 1 to 3 : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Enter the base of Triangle  : ");
        scanf("%f", &base);

        printf("Enter the height of Triangle  : ");
        scanf("%f", &height);


        printf("Area of Triangle is : %f", base * height / 2);

        break;

    case 2:
        printf("Enter the length of Rectangle  : ");
        scanf("%d", &length);

        printf("Enter the width of Rectangle : ");
        scanf("%d",&width);

        area = length * width;

        printf("Area of Rectangle is : %d", area);

        break;

    case 3:

        printf("Enter the radius of cricle : ");
        scanf("%d", &radius);

        float area = (pie * radius * radius);

        printf("Area of cricle is : %f", area);
        break;

    default:
        printf("Enter no between 1 to 3");
        break;
    }
    return 0;
}