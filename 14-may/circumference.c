// enter radius of a circle and find its diameter, circumference and area
#include <stdio.h>

int main()
{
    float radius;
    printf("Enter radius of a circle: ");
    scanf("%f", &radius);
    printf("\nDiameter of circle: %f", 2 * radius);
    printf("\nCircumference of circle: %f", 2 * 3.14 * radius);
    printf("\nArea of circle: %f", 3.14 * radius * radius);

        return 0;
}
