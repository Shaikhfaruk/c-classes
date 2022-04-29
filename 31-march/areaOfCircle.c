// Program to accept value of radius and print area of a circle.

#include <stdio.h>

int main()
{
    float area, radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of the circle is %f\n", area);
    return 0;
}
